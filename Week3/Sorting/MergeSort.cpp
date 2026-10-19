#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right) {

    int n = right - left + 1;
    int new_arr[n];
    int i = left;
    int j = mid + 1;
    int k = 0;


    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            new_arr[k] = arr[i];
            i++;
            k++;
        } else {
            new_arr[k] = arr[j];
            j++;
            k++;
        }
    }

    // Copy remaining elements from the left half
    while (i <= mid) {
        new_arr[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from the right half
    while (j <= right) {
        new_arr[k] = arr[j];
        j++;
        k++;
    }

    // Copy sorted elements back into the original array
    for (int c = 0; c < n; c++) {
        arr[left + c] = new_arr[c];
    }
}

void merge_sort(int arr[], int left, int right) {

    if (left >= right) return;
    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// Array Input:

int main() {
    int n;
    cin >> n;

    // Read array elements
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Input:
7
70 60 50 40 30 20 10

Output:
10 20 30 40 50 60 70

Time Complexity: O(n log n)
Auxiliary Space Complexity: O(n)
*/