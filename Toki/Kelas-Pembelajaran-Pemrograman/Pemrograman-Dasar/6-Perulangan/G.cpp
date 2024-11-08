#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, i;
	cin >> n;
	vector<int>x(n);
	for(i = 0; i < n; i++) {
		cin >> x[i];
	}
	int A = x[0];
	int B = x[0];
	for(i = 1; i < n; i++) {
		if(x[i] >= A) {
			A = x[i];
		}
		
		if(x[i] <= B){
			B = x[i];
		}
	}
	
	cout << A << " " << B << endl;
}
