#include <iostream>
#include <vector>
using namespace std;

bool monotonicArray(vector<int> &nums)
{
    bool increasing = true;
    bool decreasing = false;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            increasing = false;
        if (nums[i] < nums[i + 1])
            decreasing = false;
    }
    return decreasing || increasing;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 4, 2};

    bool result = monotonicArray(arr);

    cout << "Result is " << result << endl;

    return 0;
}
