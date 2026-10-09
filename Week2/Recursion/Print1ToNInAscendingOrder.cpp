
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void print1toNInAscendingOrder(int N) {
        if (N == 0) {
            return;
        }

        print1toNInAscendingOrder(N - 1);
        cout << N << endl;
    }
};

int main() {
    int N;
    cin >> N;

    solution obj;
    obj.print1toNInAscendingOrder(N);

    return 0;
}

/*
Example 1:
Input:
5

Output:
1
2
3
4
5

Example 2:
Input:
3

Output:
1
2
3
*/