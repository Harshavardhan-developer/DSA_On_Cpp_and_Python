#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkAutomorphicNumber(int num) {
        int square = num * num;
        int temp = num;
        int digits = 0;

        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }

        int power = 1;

        for (int i = 0; i < digits; i++) {
            power *= 10;
        }

        return square % power == num;
    }
};

int main() {
    solution obj;

    int num = 25;

    if (obj.checkAutomorphicNumber(num)) {
        cout << "Automorphic Number" << endl;
    } else {
        cout << "Not an Automorphic Number" << endl;
    }

    return 0;
}

/*
Example 1:
Input:
num = 25

Output:
Automorphic Number


Example 2:
Input:
num = 7

Output:
Not an Automorphic Number
*/