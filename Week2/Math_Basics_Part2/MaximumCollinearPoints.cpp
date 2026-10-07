#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int maximumNumberofCollinearPoints(vector<vector<int>>& arrPoints) {
        int n = arrPoints.size();

        if (n <= 2)
            return n;

        int ans = 0;

        for (int i = 0; i < n; i++) {
            map<pair<int, int>, int> slopeCount;
            int duplicate = 0;
            int currentMax = 0;

            for (int j = i + 1; j < n; j++) {
                int dx = arrPoints[j][0] - arrPoints[i][0];
                int dy = arrPoints[j][1] - arrPoints[i][1];

                if (dx == 0 && dy == 0) {
                    duplicate++;
                    continue;
                }

                int g = gcd(abs(dx), abs(dy));

                dx /= g;
                dy /= g;

                if (dx < 0) {
                    dx = -dx;
                    dy = -dy;
                }

                if (dx == 0)
                    dy = 1;

                if (dy == 0)
                    dx = 1;

                slopeCount[{dy, dx}]++;

                currentMax = max(currentMax, slopeCount[{dy, dx}]);
            }

            ans = max(ans, currentMax + duplicate + 1);
        }

        return ans;
    }
};

/*
Input:
[[1,1], [2,3], [3,5], [4,7], [5,9]]

Output:
5


Input:
[[1,1], [2,2], [3,3], [2,1], [3,2]]

Output:
3
*/