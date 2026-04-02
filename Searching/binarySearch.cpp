#include <iostream>
using namespace std;

// Function for iterative binary search
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents overflow

        if (arr[mid] == key)
            return mid; // Element found
        else if (arr[mid] < key)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }

    return -1; 
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = binarySearch(arr, size, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
