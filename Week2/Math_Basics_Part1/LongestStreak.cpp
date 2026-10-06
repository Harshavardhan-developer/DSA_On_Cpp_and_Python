#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int longestStreak(string s) {
        int current = 0;
        int longest = 0;

        for (char ch : s) {
            if (ch == '1') {
                current++;
                longest = max(longest, current);
            } else {
                current = 0;
            }
        }

        return longest;
    }
};

int main() {
    solution obj;

    string s = "110111011";

    cout << obj.longestStreak(s) << endl;

    return 0;
}

/*
Example 1:
Input:
s = "110111011"

Output:
3


Example 2:
Input:
s = "11110001"

Output:
4
*/