
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int recursionSum(int N) {
        if (N == 1) return 1;
        return recursionSum(N - 1) + N;
    }
};

int main() {
    int N;
    cin >> N;

    solution obj;
    cout << obj.recursionSum(N) << endl;

    return 0;
}

/*
Input:
5

Output:
15

Explanation:
1 + 2 + 3 + 4 + 5 = 15

Another Example:
Input:
4

Output:
10
*/
