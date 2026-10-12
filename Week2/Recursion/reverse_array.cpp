
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void reverse(int arr[], int N) {
        if (N <= 1) return;

        swap(arr[0], arr[N - 1]);

        reverse(arr + 1, N - 2);
    }
};

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    solution obj;
    obj.reverse(arr.data(), N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

/*
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Another Example:
Input:
4
10 20 30 40

Output:
40 30 20 10
*/
