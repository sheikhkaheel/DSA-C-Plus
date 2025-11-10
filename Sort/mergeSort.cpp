#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {

            cout << endl << " " << arr[left] << " " << arr[mid] << " " << arr[right];
            cout << endl << " " << left << " " << mid << " " << right << endl;

            // Setting Size of Temporary Arrays
            int n1 = mid - left + 1;
            int n2 = right - mid;

            // Creating Temporary Arrays

            int* L = new int[n1];
            int* R = new int[n2];   

            // Copy Data
            for(int i = 0; i < n1; ++i){
                L[i] = arr[left + i];
                cout << arr[left + i];
            }
            cout << " - ";
            for(int i = 0; i < n2; ++i){
                R[i] = arr[1 + mid + i];
                cout << arr[1 + mid + i] << " ";
            }
            cout << endl;

            //Merging to original array
            int i = 0;
            int j = 0;
            int k = left;

            while(i < n1 && j < n2){
                if(L[i] <= R[j]) {
                    arr[k] = L[i];
                    i++;
                } else {
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }

            while(i < n1){
                arr[k] = L[i];
                i++;
                k++;
            }

            while(j < n2){
                arr[k] = R[j];
                j++;
                k++;
            }

            delete[] L;
            delete[] R;

}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right - left)/2;

        // cout << arr << " left " << arr[left] << " " << arr[mid] << endl;

        mergeSort(arr, left, mid);

        // cout << arr << " right " << arr[mid + 1] << " " << arr[right] << endl;

        mergeSort(arr, mid+1, right);

        merge(arr, left, mid, right);
    }
}

int main(){
    
    int arr[8] = {4,3,2,1,8,7,6,5};

    int length = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = length - 1;

    cout << "Original Array : ";
    //Original Array
    for(int no : arr){
        cout << no << " " ;
    }
    cout << endl;

    mergeSort(arr, left, right);

    cout << "Sorted Array : ";
    //Original Array
    for(int no : arr){
        cout << no << " " ;
    }

    return 0;
}