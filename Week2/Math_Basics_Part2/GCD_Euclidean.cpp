#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 12;
    int b = 18;
    cin >> a >> b;

    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }

    if (a == 0)
        cout << b << endl;
    else
        cout << a << endl;

    return 0;
}

/*
Input:
48 18

Output:
6

Input:
20 30

Output:
10

Time Complexity: O(log(min(a, b)))
Space Complexity: O(1)
*/