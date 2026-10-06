#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkHarshadNumber(int num) {
        int original = num;
        int digit_sum = 0;

        while (num != 0) {
            int digit = num % 10;
            digit_sum += digit;
            num = num / 10;
        }

        return original % digit_sum == 0;
    }
};

int main() {
    solution obj;

    int num = 18;

    if (obj.checkHarshadNumber(num)) {
        cout << "Harshad Number" << endl;
    } else {
        cout << "Not a Harshad Number" << endl;
    }

    return 0;
}

/*
Example 1:
Input:
num = 18

Output:
Harshad Number


Example 2:
Input:
num = 19

Output:
Not a Harshad Number
*/