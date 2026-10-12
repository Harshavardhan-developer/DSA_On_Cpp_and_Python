
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void selectionSort(vector<int>& arr, int n) {
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

int main() {
    Solution sol;

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sol.selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

/*
Example 1:
Input:
5
64 25 12 22 11

Output:
11 12 22 25 64

Example 2:
Input:
6
5 4 3 2 1 0

Output:
0 1 2 3 4 5

Example 3:
Input:
5
1 2 3 4 5

Output:
1 2 3 4 5

Example 4:
Input:
7
4 -2 7 0 -5 3 1

Output:
-5 -2 0 1 3 4 7

Example 5:
Input:
4
10 10 5 5

Output:
5 5 10 10
*/
