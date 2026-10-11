#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int recursionSum(int N) {
        if (N == 1) return 1;
        return recursionSum(N - 1) + N;
    }
};

/*
Input:
N = 5

Output:
15

Explanation:
1 + 2 + 3 + 4 + 5 = 15

Input:
N = 10

Output:
55
*/