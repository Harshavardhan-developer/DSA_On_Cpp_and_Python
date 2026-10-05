#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    string canFormPalindrome(string s, string t) {
        map<char, int> count_s;
        map<char, int> count_t;

        for (char ch : s)
            count_s[ch]++;

        for (char ch : t)
            count_t[ch]++;

        if (s.length() > t.length())
            swap(count_s, count_t);

        for (auto& pair : count_s) {
            char ch = pair.first;
            int freq = pair.second;

            if (freq > count_t[ch])
                return "NO";
        }

        for (auto& pair : count_s) {
            char ch = pair.first;
            count_t[ch] -= pair.second;
        }

        int odd = 0;

        for (auto& pair : count_t) {
            if (pair.second % 2 != 0)
                odd++;
        }

        if (odd <= 1)
            return "YES";
        else
            return "NO";
    }
};

/*
Input:
s = "abc"
t = "aabbcc"

Output:
YES

Explanation:
Characters from the shorter string can be matched with
characters in the longer string.
Remaining characters can form a palindrome.
*/

/*
File name:
CanFormPalindrome.cpp
*/