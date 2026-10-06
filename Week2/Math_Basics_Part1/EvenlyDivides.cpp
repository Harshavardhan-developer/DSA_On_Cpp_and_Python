#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int reverseNumber(int N) {
        int reverse = 0;
        int last_digit;

        while (N != 0) {
            last_digit = N % 10;
            reverse = reverse * 10 + last_digit;
            N = N / 10;
        }

        return reverse;
    }
};

int main() {
    solution obj;

    int N = 12345;

    cout << obj.reverseNumber(N) << endl;

    return 0;
}

/*
Example 1:
Input:
N = 12345

Output:
54321


Example 2:
Input:
N = 793

Output:
397
*/