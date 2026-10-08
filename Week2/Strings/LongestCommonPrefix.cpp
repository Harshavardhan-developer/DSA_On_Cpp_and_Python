#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    string longest_common_prefix(vector<string>& words) {
        //Write your code here...
        int k = 0;
        int n = words.size();
        if (n == 0) return "";
        if (n == 1) return words[0];
        
        while(1) {
            for (int i = 1; i < n; i++){
                if (k == words[i].size()) return words[0].substr(0, k);
                
                if (words[i][k] != words[0][k]) return words[0].substr(0,k);
            }
            k++;
        }
    }

};

/*
==================================================
Example 1
==================================================

Input:
["flower", "flow", "flight"]

Output:
"fl"


==================================================
Example 2
==================================================

Input:
["clouds", "close", "clear", "cluster"]

Output:
"cl"


==================================================
Example 3
==================================================

Input:
["dog", "racecar", "car"]

Output:
""


==================================================
Example 4
==================================================

Input:
["interspecies", "interstellar", "interstate"]

Output:
"inters"


==================================================
Example 5
==================================================

Input:
[]

Output:
""


==================================================
Example 6
==================================================

Input:
["apple"]

Output:
"apple"

============