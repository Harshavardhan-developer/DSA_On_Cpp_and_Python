#include<bits/stdc++.h>
using namespace std;

int main() {
  // write your code here...
  
  int n = 793;
  
  while (n != 0) {
      int last_digit = n%10;
      n = n/10;
      cout << last_digit << endl;
  }
  
  return 0;
}


// Output:
// 3
// 9
// 7