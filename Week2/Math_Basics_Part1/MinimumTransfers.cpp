#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int minimumTransfers(int A, int B) {
        int total = A + B;
        int ans = INT_MAX;

        for (int bob = 1; bob < total; bob++) {
            int alice = total - bob;

            if (alice % bob == 0) {
                int transfers = abs(A - alice);

                if (transfers < ans) {
                    ans = transfers;
                }
            }
        }

        return ans;
    }
};

int main() {
    solution obj;

    int A = 10;
    int B = 5;

    cout << obj.minimumTransfers(A, B) << endl;

    return 0;
}

/*
Example 1:
Input:
A = 10
B = 5

Output:
5


Example 2:
Input:
A = 12
B = 8

Output:
2
*/