#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int recursionFactorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        return recursionFactorial(n - 1) * n;
    }
};

int main() {
    int n;
    cin >> n;

    solution obj;
    cout << obj.recursionFactorial(n) << endl;

    return 0;
}

/*
Input:
5

Output:
120

Explanation:
5! = 5 * 4 * 3 * 2 * 1 = 120

Another Example:
Input:
4

Output:
24
*/