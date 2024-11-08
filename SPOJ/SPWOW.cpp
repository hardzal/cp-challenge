// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/SPWOW

#include<bits/stdc++.h>
using namespace std;

int main() {
	int x, i;
	// your code here
	cin >> x;
	if(x > 0 && x < 50) {
		cout << "W";
		for(i = 0; i < x; i++) {
			cout << "o";
		}
		cout << "w";
	}
	return 0;
}
