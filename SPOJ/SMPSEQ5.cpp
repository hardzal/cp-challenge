// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/SMPSEQ5
#include<bits/stdc++.h>
using namespace std;

int main() {
	int i, j, n, m;
	// your code here
	cin >> n;
	int sArr[n];
	for(i = 0; i < n; i++) {
		cin >> sArr[i];
	}
	cin >> m;
	int qArr[m];
	for(i = 0; i < m; i++) {
		cin >> qArr[i];
	}
	for(i = 0; i < min(n, m); i++) {
		if(sArr[i] == qArr[i]) {
			cout << i+1 << " ";
		}
	}
	return 0;
}
