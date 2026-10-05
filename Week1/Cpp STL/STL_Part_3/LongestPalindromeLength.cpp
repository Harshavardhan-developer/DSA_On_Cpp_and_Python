#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int longestPalindromeLength(vector<string>& words) {
        map<string, int> count;

        for (string word : words) {
            count[word]++;
        }

        int length = 0;
        bool center = false;

        for (auto& pair : count) {
            string word = pair.first;
            string rev = word;
            reverse(rev.begin(), rev.end());

            if (word != rev) {
                int pairs = min(count[word], count[rev]);
                length += pairs * 4;

                count[word] -= pairs;
                count[rev] -= pairs;
            }
            else {
                int pairs = count[word] / 2;
                length += pairs * 4;

                if (count[word] % 2 == 1) {
                    center = true;
                }
            }
        }

        if (center) {
            length += 2;
        }

        return length;
    }
};

/*
Input:
words = {"lc", "cl", "gg"}

Output:
6
*/