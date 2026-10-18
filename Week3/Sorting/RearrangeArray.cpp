#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void rearrangeArray(vector<int>& arr, int k) {
        for (int i = 0; i < k; i++) {
            int index = i;

            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[j] < arr[index]) {
                    index = j;
                }
            }

            swap(arr[i], arr[index]);
        }
    }
};

/*
Input:
7
6 4 1 7 8 3 5
3

Output:
1 3 4 7 8 6 5
*/