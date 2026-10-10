
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printEvenOdd(int n) {
        vector<int> ans;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                ans.push_back(i);
            }
        }

        for (int i = n; i >= 0; i--) {
            if (i % 2 == 1) {
                ans.push_back(i);
            }
        }

        for (int num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    solution obj;
    obj.printEvenOdd(n);

    return 0;
}

/*
Example 1:
Input:
10

Output:
2 4 6 8 10 9 7 5 3 1

Example 2:
Input:
5

Output:
2 4 5 3 1

Example 3:
Input:
1

Output:
1
*/
