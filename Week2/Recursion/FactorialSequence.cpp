#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<long long> factorialSequence(int n) {
        if (n == 1) return {1};

        vector<long long> result = factorialSequence(n - 1);
        result.push_back(result.back() * n);

        return result;
    }
};

// Example:
// Input: n = 5
// Output: [1, 2, 6, 24, 120]
//
// Input: n = 3
// Output: [1, 2, 6]