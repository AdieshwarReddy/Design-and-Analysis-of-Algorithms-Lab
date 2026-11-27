#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted subarrays
void merge(vector<int>& arr, int left,
           int mid, int right) {

    vector<int> temp;

    int i = left;
    int j = mid + 1;

    // Compare elements from both halves
    while (i <= mid && j <= right) {

        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining left elements
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining right elements
    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements to original array
    for (int k = 0; k < temp.size(); k++) {
        arr[left + k] = temp[k];
    }
}

// Recursive Merge Sort function
void mergeSort(vector<int>& arr,
               int left, int right) {

    if (left < right) {

        int mid = left + (right - left) / 2;

        // Sort left half
        mergeSort(arr, left, mid);

        // Sort right half
        mergeSort(arr, mid + 1, right);

        // Merge sorted halves
        merge(arr, left, mid, right);
    }
}

// Display array
void display(const vector<int>& arr) {

    for (int element : arr) {
        cout << element << " ";
    }

    cout << endl;
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size.\n";
        return 1;
    }

    vector<int> arr(n);

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal Array: ";
    display(arr);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    display(arr);

    return 0;
}


Sample input
8
38 27 43 3 9 82 10 15

  Sample output:

Enter number of elements: 8
Enter array elements:
38 27 43 3 9 82 10 15

Original Array: 38 27 43 3 9 82 10 15
Sorted Array: 3 9 10 15 27 38 43 82
