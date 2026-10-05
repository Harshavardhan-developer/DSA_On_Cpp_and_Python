#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void sortProducts(vector<pair<string, int>>& products) {
        sort(products.begin(), products.end(), [](pair<string, int> a, pair<string, int> b) {
            return a.second < b.second;
        });
    }
    
    void displayProducts(const vector<pair<string, int>>& products) {
        for (auto& product : products) {
            cout << product.first << ":" << product.second << endl;
        }
    }
};

/*
Input:
products = {{"Laptop", 50000}, {"Mouse", 500}, {"Keyboard", 1500}}

Output:
Mouse:500
Keyboard:1500
Laptop:50000
*/