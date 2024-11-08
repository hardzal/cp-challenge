#include <bits/stdc++.h>
using namespace std;

int main(){
	int A[3], i, j, t;
	bool c=false;
	cin >> A[0] >> A[1] >> A[2];
	
	if(A[0] % 4 == 0 && A[0] > A[1] && A[0] > A[2]) {
		t = A[0] / 4;
		if(t + A[1] + A[2] == A[0]) {
			c = true;
		}
	} else if(A[1] % 4 == 0 && A[1] > A[0] && A[1] > A[2]) {
		t = A[1] / 4;
		if(t + A[2] + A[0] == A[1]) {
			c = true;
		}	
	} else if(A[2] % 4 == 0 && A[2] > A[0] && A[2] > A[1]) {
		t = A[2] / 4;
		if(t + A[1] + A[0] == A[2]) {
			c = true;
		}
	} 
	
	if(c) { 
		cout << "YA" << endl;
	} else {
		cout << "TIDAK" << endl;
	}
	return 0;
}