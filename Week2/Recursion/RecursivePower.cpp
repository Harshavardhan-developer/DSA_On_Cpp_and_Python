
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    double recursivePower(double a, int b) {
        if (b == 0) {
            return 1.0;
        }

        double pwr = 1.0;

        for (int i = 0; i < b; i++) {
            pwr *= a;
        }

        return pwr;
    }
};

int main() {
    double a;
    int b;

    cin >> a >> b;

    solution obj;
    cout << obj.recursivePower(a, b) << endl;

    return 0;
}

/*
Example 1:
Input:
2 3
Output:
8

Example 2:
Input:
5 2
Output:
25

Example 3:
Input:
7 0
Output:
1

Example 4:
Input:
2.5 2
Output:
6.25
*/
