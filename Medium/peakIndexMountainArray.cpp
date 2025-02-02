#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
            return mid; // Found the peak element
        }
        if (nums[mid] > nums[mid - 1]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1; // This statement will not execute if there exists a peak element in the array
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int result = binarySearch(arr);
    cout << "Index of Peak Element : " << result;
    return 0;
}
