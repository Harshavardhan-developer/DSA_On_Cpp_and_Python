#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void sortPairs(vector<pair<int, int>>& arr) {
        //Code Here
        sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b) {
            if (a.first == b.first)
                return a.second > b.second;
            return a.first < b.first;
        });
    }

    int popcount(long long x) {
        //Code Here
        return __builtin_popcountll(x);
    }
};

/*
Input:
arr = {(8, 4), (5, 2), (8, 6)}
x = 5

Output:
5 2
8 6
8 4
2
*/