#include <iostream>
#include <vector>
using namespace std;


// Here in this example you can understand that the reverseFunction does not change the original arr but get a copy of it 
// In order to change the original array too You need to write the arg as (vector<int> &arr) It means you are passing ref not copy

void reverseArray(vector<int> arr){
    for(int &ar : arr){
        ar *= 2;
    }

    cout << "Inside the reverseFunction" << endl;
    for(int ar : arr){
        cout << ar << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {3, 4, 5, 6, 8, 9};
    cout << "Size of nums is: " << nums.size() << endl;
    reverseArray(nums);

    cout << "Inside the mainFunction" << endl;
    for(int num : nums){
        cout << num << " ";
    }

    return 0;
}

