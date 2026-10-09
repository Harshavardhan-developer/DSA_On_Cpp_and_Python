#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string sortCharactersByFrequency(string s) {
        vector<pair<int, char>> arr(123, {0, 0});

        for (auto ch : s) {
            arr[ch] = {arr[ch].first + 1, ch};
        }

        sort(arr.begin(), arr.end(), greater<pair<int, char>>());

        string ans = "";

        for (int i = 0; i < 123; i++) {
            ans.append(string(arr[i].first, arr[i].second));
        }

        return ans;
    }
};  


/*
Example 1:
Input: s = "tree"
Output: "eert"

Example 2:
Input: s = "cccaaa"
Output: "cccaaa"

Example 3:
Input: s = "Aabb"
Output: "bbAa"

Example 4:
Input: s = "hello"
Output: "llheo"
*/