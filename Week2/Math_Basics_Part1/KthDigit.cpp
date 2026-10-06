#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int kthDigit(int A, int B, int k) {
        long long num = 1;
        
        for (int i = 0; i < B; i++) {
            num *= A;
        }

        long long divisor = 1;

        for (int i = 1; i < k; i++) {
            divisor *= 10;
        }

        return (num / divisor) % 10;
    }
};

int main() {
    solution obj;

    int A = 3;
    int B = 3;
    int k = 2;

    cout << obj.kthDigit(A, B, k) << endl;

    return 0;
}

/*
Example 1:
Input:
A = 3
B = 3
k = 2

A^B = 27

Output:
2


Example 2:
Input:
A = 2
B = 5
k = 1

A^B = 32

Output:
2
*/