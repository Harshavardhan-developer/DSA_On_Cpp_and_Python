#include <bits/stdc++.h>
using namespace std;

string isPrime(int n) {
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            return "Not Prime";
            break;
        }
    }
    return "Prime";
}
 
int main() {
  // write your code here....
  int n = 45;
  cout << isPrime(n) << endl;
  return 0;
}