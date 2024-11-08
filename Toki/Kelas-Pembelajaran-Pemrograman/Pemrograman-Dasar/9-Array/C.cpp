#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, maxMod=0, mode, i, j, k;
	vector<long> fqMod(2000);
	fqMod[2000] = {0};
	cin >> n;
	for(i = 0; i<n; i++) {
	 cin >> k;
	 fqMod[k]++;
	}
	
	for(j = 1; j <= 1000; j++) {
	 if(fqMod[j]>=maxMod) {
	  maxMod = fqMod[j];
	  mode = j;
	 }
	}
	
	cout << mode << endl;
	return 0;
}
