
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

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    solution s;
    s.selectionSort(arr.data(), n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

/*
Input:
5
64 25 12 22 11

Output:
11 12 22 25 64
*/