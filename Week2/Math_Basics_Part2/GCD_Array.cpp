#include<bits/stdc++.h>
using namespace std;

class solution {
  public:
  
    int findGCD(int a, int b){
        while (b != 0){
            int rem = a % b;
            a = b;
            b =  rem;
        }    
        return a;
    }
    
    int gcd(int N, int arr[])
    {
    	//Write your code here...
    	
    	int ans = arr[0];
    	
    	for (int i = 1; i < N; i++){
    	    ans = findGCD(ans, arr[i]);
    	}
    	return ans;
	
    }
};

/*
Input:
5
12 18 24 30 36

Output:
6

Input:
4
15 25 35 45

Output:
5
*/