#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void insertionSort(int arr[], int n) {
        for (int i = 1; i < n; i++) {
            int j = i;

            while (j >= 1 && arr[j - 1] < arr[j]) {
                swap(arr[j - 1], arr[j]);
                j--;
            }
        }
    }
};

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    solution obj;
    obj.insertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

/*

Input:
5
5 3 4 6 2

Output:
6 5 4 3 2
*/