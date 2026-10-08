#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string largestOddNumber(string s) {
        // Write your code here...

        for (int i = s.size() - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 1) {
                return s.substr(0, i + 1);
            }
        }

        return "";
    }
};

/*
Example 1:

Input:
23467850

Output:
2346785


Example 2:

Input:
52

Output:
5


Example 3:

Input:
4206

Output:
""


Example 4:

Input:
35427

Output:
35427
*/