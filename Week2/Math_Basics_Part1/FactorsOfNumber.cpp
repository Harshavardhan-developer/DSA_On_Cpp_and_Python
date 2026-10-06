#include<bits/stdc++.h>
using namespace std;

int main() {
  // write your code here...
  
  int num = 24;
  
  for (int i = 1; i < num; i++){
      if (num % i == 0) {
          cout << i << endl;
      }
  }

  return 0;
}

/*
Input:
num = 24

Output:
1
2
3
4
6
8
12
*/


// Time Complexity: O(n)
