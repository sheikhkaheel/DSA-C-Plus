#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairSum(vector<int> nums, int sz, int target)
{
    std::sort(nums.begin(), nums.end());
    vector<int> res;
    int start = 0;
    int end = sz-1;

    while (start < end)
    {
        int ans = nums[start] + nums[end];

        if (ans < target)             //{1, 4, 5, 11, 9}; 14
        {
            start++;
        }
        else if (ans > target)
        {
            end--;
        }
        else
        {   
            res.push_back(nums[start]);
            res.push_back(nums[end]);
            return res;
        }
    }

    return nums;
}

int main()
{
    vector<int> arr = {1, 4, 5, 11, 9};
    int size = arr.size();
    int target = 14;

    vector<int> result = pairSum(arr, size, target);

    cout << result[0] << ", " << result[1] << endl;

    return 0;
}