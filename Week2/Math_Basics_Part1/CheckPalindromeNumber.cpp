#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isPalindrome(int n) {
        int original = n;
        int reverse = 0;

        while (n != 0) {
            int last_number = n % 10;
            reverse = reverse * 10 + last_number;
            n = n / 10;
        }

        return original == reverse;
    }
};

int main() {
    solution obj;

    int n = 121;

    if (obj.isPalindrome(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

/*
Example 1:
Input:
n = 121

Output:
true


Example 2:
Input:
n = 123

Output:
false
*/