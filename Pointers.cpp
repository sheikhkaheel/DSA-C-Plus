#include <iostream>
using namespace std;

int main(){
    cout << "Its is working" << endl;

    //Pointer is a variable that stores the address of another variable

    int num = 5;

    int* ptr = &num;          // Passing the address of a variable num to another variable ptr
    int** ptr2 = &ptr;        // Passing the address of a painter variable to another painter varaible

    cout << &num << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
    cout << num << endl;


    int arr[] = {1,2,3,4,5};

    int value2 = *arr;
    value2++;

    cout << arr << endl;
    cout << *arr << endl;
    cout << value2 << endl;

    return 0;
}