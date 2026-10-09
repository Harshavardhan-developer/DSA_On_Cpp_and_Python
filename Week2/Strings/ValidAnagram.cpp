#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool validAnagram(string s1, string s2) {
        //Write your code here...


        // sort(s1.begin(), s1.end());
        // sort(s2.begin(), s2.end());
        
        // if (s1 == s2) return true;
        // else return false;

        
        
        if (s1.size() != s2.size()) return false;
        
        vector<int> arr(26, 0);
        
        for (auto ch : s1) arr[ch - 'a']++;
        for (auto ch : s2) arr[ch - 'a']--;
        
        for (int i = 0; i < 26; i++){
            if (arr[i] != 0) return false;
        }
        return true;
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