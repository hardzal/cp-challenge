// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/SMPSEQ4
#include<bits/stdc++.h>
using namespace std;

int main() {
	int i, j, n, m, found;
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
	for(i = 0; i < n; i++) {
		found = 0;
		for(j = 0; j < m; j++) {
			if(sArr[i] == qArr[j]) {
				found = 1; 
				break;
			}
		}
		if(found) {
			cout << sArr[i] << " ";
		}
	}
	return 0;
}
