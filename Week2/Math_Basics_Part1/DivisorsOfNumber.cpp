#include<bits/stdc++.h>
using namespace std;

int main() {
  // write your code here...
  
  int num = 24;
  
  vector<int> divisor;
  
  for (int i = 1; i * i <= num; i++){

      if (num % i == 0) {
          divisor.push_back(i);

          if (i != num / i) {
              divisor.push_back(num / i);
          }

      }

  }
  
  sort(divisor.begin(), divisor.end());
  
  for (auto i : divisor){
      cout << i << endl;
  }

  return 0;
}

/*
Example 1:

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
24


Example 2:

Input:
num = 36

Output:
1
2
3
4
6
9
12
18
36
*/

// Time Complexity: O(sqrt(n) + k log k), where n is the input number and k is the number of divisors of n.