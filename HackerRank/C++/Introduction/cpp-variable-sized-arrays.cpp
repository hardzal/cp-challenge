// https://www.hackerrank.com/challenges/variable-sized-arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j, a, b, x, y;
    cin >> a >> b;
    vector<int> n;
    vector<int> m;
    vector< vector<int> > p(a);
    for(i = 0; i < a; i++) {
        cin >> x;
        for(j = 0; j < x; j++) {
            cin >> y;
            p[i].push_back(y);
        }
    }
    for(i = 0; i < b; i++) {
        cin >> x >> y;
        n.push_back(x);
        m.push_back(y);
    }
    for(i = 0; i < b; i++) {
        cout << p[n[i]][m[i]] << endl;
    }
    return 0;
}

