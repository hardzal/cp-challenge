#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, i, j, x, y, z;
    vector<int> a;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> j;
        a.push_back(j);
    }
    cin >> z >> x >> y;
    a.erase(a.begin()+z-1);
    a.erase(a.begin()+x-1, a.begin()+y-1);
    cout << a.size() << endl;
    for(i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}

