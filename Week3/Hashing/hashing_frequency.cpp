
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (auto item : freq) {
        cout << item.first << " appears "
             << item.second << " times" << endl;
    }

    return 0;
}

/*
Input:
7
1 2 2 3 1 2 4

Output:
1 appears 2 times
2 appears 3 times
3 appears 1 times
4 appears 1 times
*/
