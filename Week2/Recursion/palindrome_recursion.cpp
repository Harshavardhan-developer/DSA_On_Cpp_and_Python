#include <bits/stdc++.h>
using namespace std;

bool check(int i, string s) {
    if (i >= s.size() / 2) return true;

    if (s[i] != s[s.size() - i - 1]) return false;

    return check(i + 1, s);
}

int main() {
    string s;
    getline(cin, s);

    if (check(0, s)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}

/*
Input:
madam

Output:
Palindrome

Another Example:
Input:
hello

Output:
Not Palindrome
*/