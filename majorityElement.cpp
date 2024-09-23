#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums, int sz)
{
    int freq = 0, ans;                 
    for (int i = 0; i < sz; i++)
    {
        if (freq == 0)
            ans = nums[i];
        if (ans == nums[i])
            freq++;
        else
            freq--;
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 4, 3, 4, 4};
    int size = arr.size();

    int result = majorityElement(arr, size);
    cout << result << endl;

    return 0;
}