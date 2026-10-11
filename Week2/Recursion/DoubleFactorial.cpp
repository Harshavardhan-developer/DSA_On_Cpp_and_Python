#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int doubleFactorial(int n) {
        if (n <= 1) return 1;

        return n * doubleFactorial(n - 2);
    }
};

/*
Input:
n = 5

Output:
15

Explanation:
5!! = 5 × 3 × 1 = 15

Input:
n = 6

Output:
48

Explanation:
6!! = 6 × 4 × 2 = 48
*/