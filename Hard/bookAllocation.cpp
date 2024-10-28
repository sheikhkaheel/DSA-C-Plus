#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxAllocatedPages ){  // O(logn)
    int student = 1, pages = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllocatedPages){
            return false;
        }
    }

    for(int i = 0; i < n; i++){
        if(pages + arr[i] <= maxAllocatedPages){
            pages += arr[i];
        } else {
            student++;
            pages = arr[i];
        }
    }

    return student > m ? false : true;
}


int allocateBook(vector<int>& arr, int n, int m){    // O(logN * n)
    if(m > n){
        return -1;
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int ans = -1;
    int st = 0; int end = sum;

    while(st <= end){
        int mid = st + (end - st)/2;

    if(isValid(arr, n, m, mid)){     // check for valid min no of books to each students 
        ans = mid;
        end = mid - 1;
    } else {
        st = mid + 1;
    }

    }

    return ans;
}

int main()
{
    // To allocate min sum of contiguous books to m no of students also that each student should have atleast a arr[i] book
    // Here each array value represents the no of books

    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBook(arr, n, m) << endl;
    return 0;
}