// https://www.hackerrank.com/challenges/30-binary-numbers
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
    int n;
    int rem=0,s=0,t=0;
	cin >> n;

    while(n>0)
        {
        rem=n%2;    
        n=n/2;
        if(rem==1)
         {   
           s++;
           if(s>=t) t=s;
        }
        else{
            s=0;
        }   
    }
    cout << t;
    return 0;
}

