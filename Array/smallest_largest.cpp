#include <iostream>
using namespace std;

int main(){
    
    int arr[] = {4,5,7,9,-5,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int second_smallest = arr[0];
    int smallest = arr[0];
    int second_largest = arr[0];
    int largest = arr[0];

    for(int start = 0; start < size - 1 ; start++){
        if(arr[start]  > largest){
            second_largest = largest;
            largest = arr[start];
        }
        if(arr[start] < smallest){
            second_smallest = smallest;
            smallest = arr[start];
        }
    }

    cout << "Second Smallest -> " << second_smallest << endl;
    cout << "Smallest -> " << smallest << endl;
    cout << "Largest -> " << largest << endl;
    cout << "Second Largest -> " << second_largest << endl;


    return 0;
}