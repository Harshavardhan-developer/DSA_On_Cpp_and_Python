#include <bits/stdc++.h>
using namespace std;

void reverse(int i, int a[], int n) {
    if (i >= n / 2) return;

    swap(a[i], a[n - i - 1]);
    reverse(i + 1, a, n);
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    reverse(0, a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

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