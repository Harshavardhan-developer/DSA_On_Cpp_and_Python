#include <bits/stdc++.h>
using namespace std;

void f(int i, int sum) {
    if (i == 0) {
        cout << sum << endl;
        return;
    }

    f(i - 1, sum + i);
}

int main() {
    int n;
    cin >> n;

    f(n, 0);

    return 0;
}

/*
Input:
5

Output:
15

Explanation:
5 + 4 + 3 + 2 + 1 = 15

Another Example:
Input:
3

Output:
6
*/