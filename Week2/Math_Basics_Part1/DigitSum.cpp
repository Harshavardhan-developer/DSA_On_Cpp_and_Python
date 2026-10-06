#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int calculateDigitSum(int N1, int N2) {
        int total = 0;

        for (int num = N1; num <= N2; num++) {
            int temp = num;

            while (temp != 0) {
                total += temp % 10;
                temp = temp / 10;
            }
        }

        return total;
    }
};

int main() {
    solution obj;

    int N1 = 10;
    int N2 = 13;

    cout << obj.calculateDigitSum(N1, N2) << endl;

    return 0;
}

/*
Example 1:
Input:
N1 = 5
N2 = 10

Output:
40


Example 2:
Input:
N1 = 10
N2 = 13

Output:
10
*/