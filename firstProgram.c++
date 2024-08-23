#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        cout << "Element in array at index " << i << ": " << arr[i] << endl;
    }

    // It represent the size of array in bits as int take 4 bits space therefore the
    // size of array is 20 because it contains 5 elements 5 * 4
    cout << sizeof(arr) << endl; 
                         
    // span element in c++

    int input;
    cout << "Enter your Element ";
    cin >> input;

    cout << "The Element is " << input << endl;
    return 0;
}
