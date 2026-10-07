#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input two numbers
    int n1, n2;
    cin >> n1 >> n2;


    int gcd = 0;


    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    cout << gcd << endl;

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

Time Complexity: O(min(n1, n2))
Space Complexity: O(1)
*/