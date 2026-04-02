#include <iostream>
using namespace std;

// It is called two pointer approch for reversing an array

int main()
{
    int arr[] = {2, 5, 7, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int temp = 0;

    cout << "Original array: ";

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    // Swapping between the starting and ending elements until it reaches the middle
    for(int end = size - 1; end != start; end--){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
    }

    cout << "Reversed array: ";

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;

}
