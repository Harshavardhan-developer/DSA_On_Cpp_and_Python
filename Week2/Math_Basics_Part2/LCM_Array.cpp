#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int findGCD(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    int lcmArray(vector<int>& arr) {
        // Write your code here...

        long long ans = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            int gcd = findGCD(ans, arr[i]);
            ans = (ans / gcd) * arr[i];
            ans %= 1000000007;
        }

        return ans;
    }
};

/*
Input:
[1, 2, 4, 6]

Output:
12

Input:
[2, 3, 9, 4, 7]

Output:
252
*/