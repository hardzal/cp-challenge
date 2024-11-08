// https://www.hackerrank.com/challenges/30-loops
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int n, i = 1;
    cin >> n;
    while(i <= 10){
        cout << n << " x " << i << " = " << n*i << endl;
        i++;
    }
    return 0;
}
