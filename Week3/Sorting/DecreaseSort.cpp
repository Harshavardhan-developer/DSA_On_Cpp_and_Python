#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void selectionSort(vector<int>& arr, int n) {
        for (int i = 0; i < n - 1; i++) {
            int max_index = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[max_index]) {
                    max_index = j;
                }
            }

            swap(arr[i], arr[max_index]);
        }
    }
};

/*
Input:  arr = {5, 3, 8, 2, 1}, n = 5
Output: 8 5 3 2 1
*/