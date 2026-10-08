#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string reverseWords(string text) {
        // Write your code here...

        stringstream ss(text);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        int n = words.size();
        string ans = "";

        for (int i = n - 1; i >= 0; i--) {
            ans += words[i] + " ";
        }

        ans.pop_back();

        return ans;
    }
};

/*
==================================================
Example 1
==================================================

Input:
"hello world"

Output:
"world hello"


==================================================
Example 2
==================================================

Input:
"the sky is blue"

Output:
"blue is sky the"


==================================================
Example 3
==================================================

Input:
"  hello   world  "

Output:
"world hello"

==================================================
*/