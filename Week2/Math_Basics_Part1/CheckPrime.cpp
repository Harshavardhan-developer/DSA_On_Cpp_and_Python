#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    solution obj;

    int n = 17;

    if (obj.isPrime(n)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

    return 0;
}

/*
Example 1:
Input:
n = 17

Output:
Prime


Example 2:
Input:
n = 20

Output:
Not Prime
*/