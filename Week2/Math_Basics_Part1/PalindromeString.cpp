#include<bits/stdc++.h>
using namespace std;

int main() {
  // write your code here...
  
  string n = "MADAM";
  string empty;
  
  for (int i = n.size() - 1 ; i >= 0; i--){
      empty += n[i];
  }
    if (n == empty) {
        cout << empty << endl;
        cout << "Palindrome" << endl;
    }else{
        cout << empty << endl;
        cout << "Not a Palindrome" << endl;
    }
  return 0;
}


 /*
Input:
n = "MADAM"

Output:
MADAM
Palindrome
*/



