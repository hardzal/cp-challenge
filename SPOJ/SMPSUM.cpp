// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/submit/SMPSUM

#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, i, result = 0;
	// your code here
	cin >> a >> b;
	if (a >= 1 && a <= b && b <= 100) {
		for(i = a; i <= b; i++) {
			result = result + (i*i);
		}
		cout << result;
	}
	return 0;
}
