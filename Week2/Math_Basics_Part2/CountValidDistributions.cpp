#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    long long countValidDistributions(int totalMarbles, int maxPerBox) {
        int n = totalMarbles;
        int m = maxPerBox;

        // If even putting maxPerBox in all 3 boxes is not enough
        if (n > 3 * m) {
            return 0;
        }

        // C(x, 2) = x * (x - 1) / 2
        auto choose2 = [](long long x) -> long long {
            if (x < 2) {
                return 0;
            }
            return x * (x - 1) / 2;
        };

        // Total non-negative solutions:
        // x + y + z = n
        long long total = choose2(n + 2);

        // Subtract solutions where one box has > m
        if (n >= m + 1) {
            long long bad_one = 3 * choose2(n - m + 1);
            total -= bad_one;
        }

        // Add back solutions where two boxes have > m
        if (n >= 2 * (m + 1)) {
            long long bad_two = 3 * choose2(n - 2 * m);
            total += bad_two;
        }

        // All three boxes > m
        if (n >= 3 * (m + 1)) {
            long long bad_three = choose2(n - 3 * m - 1);
            total -= bad_three;
        }

        return total;
    }
};

/*
Input:
totalMarbles = 5
maxPerBox = 3

Output:
21


Input:
totalMarbles = 10
maxPerBox = 3

Output:
0
*/