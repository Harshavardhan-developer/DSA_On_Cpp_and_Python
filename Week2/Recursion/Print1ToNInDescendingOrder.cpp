
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void print1toNInDescendingOrder(int N) {
        if (N == 0) return;

        cout << N << endl;
        print1toNInDescendingOrder(N - 1);
    }
};

int main() {
    int N;
    cin >> N;

    solution obj;
    obj.print1toNInDescendingOrder(N);

    return 0;
}

/*
Example 1:
Input:
5

Output:
5
4
3
2
1

Example 2:
Input:
3

Output:
3
2
1

Example 3:
Input:
1

Output:
1
*/
