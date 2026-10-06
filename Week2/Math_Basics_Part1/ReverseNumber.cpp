#include<bits/stdc++.h>
using namespace std;

int main() {
  // write your code here...
  
  int n = 793;
  int last_digit;
  int rev = 0;
  
  while (n != 0) {
      last_digit = n % 10;
      rev = rev * 10 + last_digit;
      n = n / 10;
  }

  cout << rev << endl;

  return 0;
}

/*
Input:
n = 793

Output:
397
*/