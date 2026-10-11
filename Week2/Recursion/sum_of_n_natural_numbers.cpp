#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n == 1) return 1;
    return sum(n - 1) + n;
}

int main() {
    int n;
    cin >> n;

    cout << sum(n);

    return 0;
}

/*
Input:
5

Output:
15

Explanation:
sum(5) = sum(4) + 5
       = sum(3) + 4 + 5
       = sum(2) + 3 + 4 + 5
       = sum(1) + 2 + 3 + 4 + 5
       = 1 + 2 + 3 + 4 + 5
       = 15

Another Example:
Input:
3

Output:
6
*/