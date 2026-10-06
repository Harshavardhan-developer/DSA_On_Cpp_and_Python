#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printDigit(int n) {
        while (n != 0) {
            int last_digit = n % 10;
            cout << last_digit << endl;
            n = n / 10;
        }
    }
};

int main() {
    solution obj;

    int n = 12345;

    obj.printDigit(n);

    return 0;
}

/*
Example 1:
Input:
n = 12345

Output:
5
4
3
2
1


Example 2:
Input:
n = 793

Output:
3
9
7
*/
