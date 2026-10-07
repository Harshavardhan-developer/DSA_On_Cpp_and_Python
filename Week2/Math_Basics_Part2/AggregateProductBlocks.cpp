#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    long long aggregateProductBlocks(int num) {
        const long long MOD = 1000000007;

        long long total = 0;
        long long current = 1;

        for (int block = 1; block <= num; block++) {
            long long product = 1;

            // Multiply the next 'block' consecutive integers
            for (int i = 0; i < block; i++) {
                product = (product * current) % MOD;
                current++;
            }

            total = (total + product) % MOD;
        }

        return total;
    }
};

/*
Input:
3

Output:
127


Input:
4

Output:
36727
*/