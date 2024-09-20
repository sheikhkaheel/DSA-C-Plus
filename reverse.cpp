#include <iostream>
using namespace std;

// It is called two pointer approch for reversing an array

int main()
{
    int arr[] = {2, 5, 7, 9, 3};
    int size = sizeof(arr) / sizeof(int);
    int end = sizeof(arr) / sizeof(int) - 1;
    int temp = 0;

    for (int i = 0; i != end; i++)
    {
        temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
