#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    if(arr.size() == 1) return arr[0];

    while (start <= end)
    {
        int mid = (start + (end - start) / 2);

        if (mid == 0 && arr[0] != arr[1]) return arr[mid];
        if (mid == arr.size() - 1 && arr[arr.size() - 2] != arr[arr.size() - 3]) return arr[mid];
        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1]) return arr[mid];

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid - 1])
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
            if (arr[mid - 1] == arr[mid])
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
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 5};

    int result = binarySearch(arr);
    cout << "Target Element is " << result;
}