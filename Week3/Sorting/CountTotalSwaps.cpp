#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countSwaps(int arr[], int n) {
        int count = 0;

        // Start from the second element
        for (int i = 1; i < n; i++) {
            int j = i;

            // Move the element to its correct position
            while (j >= 1 && arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
                count++;
                j--;
            }
        }

        // Return the total number of swaps
        return count;
    }
};

/*
Input:
5
12 9 4 7 2

Output:
9

Explanation:
The array is sorted in ascending order using insertion sort.
The total number of adjacent swaps is 9.

Time Complexity: O(n^2)
Space Complexity: O(1)
*/