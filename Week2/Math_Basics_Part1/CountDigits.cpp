#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int countDigits(int n){
        string str = to_string(n);
        return str.size();
    }
};

int main() {
    solution obj;

    int n = 12345;

    cout << obj.countDigits(n) << endl;

    return 0;
}

/*
Example 1:
Input:
n = 12345

Output:
5


Example 2:
Input:
n = 793

Output:
3
*/