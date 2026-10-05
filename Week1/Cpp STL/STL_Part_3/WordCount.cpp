#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void countWords(map<string, int>& wordCount, const string& paragraph) {
        stringstream ss(paragraph);
        string word;

        while (ss >> word) {
            wordCount[word]++;
        }
    }
    
    void displayWordCount(const map<string, int>& wordCount) {
        for (auto& pair : wordCount) {
            cout << pair.first << "-" << pair.second << endl;
        }
    }
};

/*
Input:
paragraph = "hello world hello cpp world"

Output:
cpp-1
hello-2
world-2
*/