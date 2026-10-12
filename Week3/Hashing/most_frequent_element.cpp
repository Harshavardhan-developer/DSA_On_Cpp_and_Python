
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(int n, vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        int most_frequent = nums[0];

        for (int num : nums) {
            if (freq[num] > freq[most_frequent]) {
                most_frequent = num;
            }
        }

        return most_frequent;
    }
};

int main() {
    Solution sol;

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << sol.mostFrequentElement(n, nums) << endl;

    return 0;
}

/*
Example Input:
7
1 2 2 3 3 3 2

Example Output:
2
*/
