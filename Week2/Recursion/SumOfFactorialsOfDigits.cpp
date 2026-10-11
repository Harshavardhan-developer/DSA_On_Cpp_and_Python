
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int sumOfFactorialsOfDigits(int n) {
        if (n == 0) return 0;

        int digit = n % 10;
        int factorial = 1;

        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        return factorial + sumOfFactorialsOfDigits(n / 10);
    }
};

// Example:
// Input: 145
// Output: 145
// Explanation: 1! + 4! + 5! = 1 + 24 + 120 = 145
//
// Input: 23
// Output: 8
// Explanation: 2! + 3! = 2 + 6 = 8
