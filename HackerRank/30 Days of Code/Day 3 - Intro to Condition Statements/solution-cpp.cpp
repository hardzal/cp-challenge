// https://www.hackerrank.com/challenges/30-conditional-statements
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
using namespace std;

int main(){
   	int x;
	cin >> x;
	if(x % 2 == 0){
		if(((x > 2)&&(x < 5))||(x > 20)){
			cout << "Not Weird";
		}else if ((x > 6)&&(x <= 20)){
            cout << "Weird";
        }
	}else{
		cout << "Weird";
	}
}
