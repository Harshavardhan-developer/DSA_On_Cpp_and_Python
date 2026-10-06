#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }

        int total = 1;

        int i = 2;

        while (i * i <= num) {
            if (num % i == 0) {
                total += i;

                if (i != num / i) {
                    total += num / i;
                }
            }

            i++;
        }

        return total == num;
    }
};

int main() {
    solution obj;

    int num = 28;

    if (obj.checkPerfectNumber(num)) {
        cout << "Perfect Number" << endl;
    } else {
        cout << "Not a Perfect Number" << endl;
    }

    return 0;
}

/*
Example 1:
Input:
num = 28

Output:
Perfect Number


Example 2:
Input:
num = 12

Output:
Not a Perfect Number
*/