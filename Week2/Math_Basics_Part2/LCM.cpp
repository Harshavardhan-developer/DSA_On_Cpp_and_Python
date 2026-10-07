#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int lcm(int A, int B) {
        //Write your code here...
    int x = A;
    int y = B;

    while (y != 0) {
        int rem = x % y;
        x = y;
        y = rem;
    }

    int gcd = x;
    int lcm = (A * B) / gcd;

    return lcm;
        
    }

};


/*
Input:
12 18

Output:
36

Input:
4 6

Output:
12

Time Complexity: O(log(min(A, B)))
Space Complexity: O(1)
*/