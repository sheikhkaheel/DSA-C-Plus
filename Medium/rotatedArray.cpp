#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

// This problem is used to find the target value within the sorted part of the array using binary search
// With time complexity of (nlogn)

int binarySearch(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = (start + (end - start) / 2);
        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[start] > nums[end])
        {
            if (target >= nums[start] && target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target > nums[mid] && target <= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    system("CLS");
    // vector<int> arr = {7, 8, 9, 0, 1, 2, 3, 4, 5, 6};
    vector<int> arr = {11, 12, 13, 14, 4, 5, 6, 7, 8, 9};
    int target = 7;
    int result = binarySearch(arr, target);
    cout << "Index is : " << result;

    return 0;
}