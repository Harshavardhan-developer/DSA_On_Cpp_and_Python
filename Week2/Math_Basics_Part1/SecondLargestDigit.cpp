#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int secondLargestDigit(int num) {
        set<int> digits;

        num = abs(num);

        while (num != 0) {
            int digit = num % 10;
            digits.insert(digit);
            num = num / 10;
        }

        if (digits.size() < 2) {
            return -1;
        }

        auto it = digits.rbegin();
        it++;

        return *it;
    }
};

int main() {
    solution obj;

    int num = 12345;

    cout << obj.secondLargestDigit(num) << endl;

    return 0;
}

/*
Example 1:
Input:
num = 12345

Output:
4


Example 2:
Input:
num = 5555

Output:
-1
*/