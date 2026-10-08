#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isomorphic(string s1, string s2) {

        if (s1.size() != s2.size()) {
            return false;
        }

        map<char, char> map1;
        map<char, char> map2;

        for (int i = 0; i < s1.size(); i++) {

            char char1 = s1[i];
            char char2 = s2[i];

            if (map1.find(char1) != map1.end()) {
                if (map1[char1] != char2) {
                    return false;
                }
            }

            if (map2.find(char2) != map2.end()) {
                if (map2[char2] != char1) {
                    return false;
                }
            }

            map1[char1] = char2;
            map2[char2] = char1;
        }

        return true;
    }
};

/*
Example 1:
Input:
s1 = "moon"
s2 = "feed"

Output:
true


Example 2:
Input:
s1 = "egg"
s2 = "add"

Output:
true


Example 3:
Input:
s1 = "foo"
s2 = "bar"

Output:
false


Example 4:
Input:
s1 = "ab"
s2 = "aa"

Output:
false
*/