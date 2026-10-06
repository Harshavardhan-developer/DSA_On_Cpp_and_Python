#include<bits/stdc++.h>
using namespace std;

int main() {
  // write your code here...
  
  int n = 1231;
  string s = to_string(n);
  string empty;
  
  for (int i = s.size() - 1; i >= 0; i--) {
      empty += s[i];
  }

  if (s == empty) {
      cout << "Palindrome" << endl;
  } else {
      cout << "Not a Palindrome" << endl;
  }

  return 0;
}

/*
Input:
n = 1231

Output:
Not a Palindrome
*/