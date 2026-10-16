#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void selectionSort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int min_index = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min_index]) {
                    min_index = j;
                }
            }

            swap(arr[i], arr[min_index]);
        }
    }
};

/*
Input:
5
64 25 12 22 11

Output:
11 12 22 25 64
*/