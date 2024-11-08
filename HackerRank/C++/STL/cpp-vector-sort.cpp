#include <cmath>
#include <cstdio>
// https://www.hackerrank.com/challenges/vector-sort
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> a;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
       cout << a[i] << " ";    
    }
    return 0;
}

