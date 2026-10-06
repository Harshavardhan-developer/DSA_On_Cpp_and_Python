#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> printDivisors(int n) {
        vector<int> divisors;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
            }
        }

        return divisors;
    }
};

int main() {
    solution obj;

    int n = 24;

    vector<int> result = obj.printDivisors(n);

    for (int divisor : result) {
        cout << divisor << " ";
    }

    cout << endl;

    return 0;
}

/*
Example 1:
Input:
n = 24

Output:
1 2 3 4 6 8 12 24


Example 2:
Input:
n = 36

Output:
1 2 3 4 6 9 12 18 36
*/