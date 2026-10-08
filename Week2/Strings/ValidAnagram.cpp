#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool validAnagram(string s1, string s2) {
        // Write your code here...

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 == s2) {
            return true;
        }
        else {
            return false;
        }
    }
};

/*
Example 1:

Input:
s1 = "listen"
s2 = "silent"

Output:
true


Example 2:

Input:
s1 = "hello"
s2 = "world"

Output:
false


Example 3:

Input:
s1 = "night"
s2 = "thing"

Output:
true


Example 4:

Input:
s1 = "rat"
s2 = "car"

Output:
false
*/