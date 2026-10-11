#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int recursiveSumOfSquares(int n) {

        if (n == 1) return 1;
        
        return n * n + recursiveSumOfSquares(n - 1);
    }
};

/*
Input:
n = 5

Output:
55

Explanation:
1² + 2² + 3² + 4² + 5² = 55

Input:
n = 3

Output:
14

Explanation:
1² + 2² + 3² = 14
*/