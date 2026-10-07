#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int calculateTypingDistance(string text) {
        string keyboard[3] = {
            "qwertyuiop",
            "asdfghjkl",
            "zxcvbnm"
        };

        map<char, pair<int, int>> position;

        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < keyboard[r].size(); c++) {
                position[keyboard[r][c]] = {r, c};
            }
        }

        int total = 0;

        int currentRow = 1;
        int currentCol = 0;

        for (char ch : text) {
            int nextRow = position[ch].first;
            int nextCol = position[ch].second;

            total += abs(currentRow - nextRow) + abs(currentCol - nextCol);

            currentRow = nextRow;
            currentCol = nextCol;
        }

        return total;
    }
};

/*
Input:
nature

Output:
23


Input:
abc

Output:
4
*/