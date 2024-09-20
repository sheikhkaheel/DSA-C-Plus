#include <iostream>
using namespace std;

int main(){
    int arr[] = {4,5,7,9,-5,8}; 
    int smallest = INT_MAX; 
    int largest = INT_MIN;

    for(int i = 0; i < 6; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "Smallest value is " << smallest << endl;
    cout << "Largest value is " << largest << endl;
    return 0;
}