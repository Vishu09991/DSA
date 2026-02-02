/*
Quick Sort
*/
/*
Quick Sort
*/
#include <bits/stdc++.h>
using namespace std;

int partitionFunc(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        // Move i right
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        // Move j left
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot in correct position
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int part_index = partitionFunc(arr, low, high);
        quick_sort(arr, low, part_index - 1);
        quick_sort(arr, part_index + 1, high);
    }
}

int main() {
    vector<int> arr = {45, 58, 63, 12, 0, 78};
    int n = arr.size();

    quick_sort(arr, 0, n - 1);

    // Print sorted array
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
