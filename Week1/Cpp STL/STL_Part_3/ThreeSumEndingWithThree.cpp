#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string hasThreeSumEndingWithThree(vector<int>& arr) {
        int count[10] = {};

        for (int num : arr) {
            count[num % 10]++;
        }

        for (int i = 0; i < 10; i++) {
            for (int j = i; j < 10; j++) {
                for (int k = j; k < 10; k++) {
                    if ((i + j + k) % 10 != 3)
                        continue;

                    if (i == j && j == k) {
                        if (count[i] >= 3)
                            return "YES";
                    }
                    else if (i == j) {
                        if (count[i] >= 2 && count[k] >= 1)
                            return "YES";
                    }
                    else if (j == k) {
                        if (count[j] >= 2 && count[i] >= 1)
                            return "YES";
                    }
                    else {
                        if (count[i] >= 1 &&
                            count[j] >= 1 &&
                            count[k] >= 1)
                            return "YES";
                    }
                }
            }
        }

        return "NO";
    }
};


// Input:
// arr = {1, 2, 10, 20, 13}

// Output:
// YES
