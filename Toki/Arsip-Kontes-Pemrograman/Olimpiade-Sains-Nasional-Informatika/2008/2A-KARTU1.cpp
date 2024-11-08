#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int i, a[2] = {0, 0};
    int totalNilai;
    string K[6];
    for(i = 0; i < 6; i++) {
    	cin >> K[i];
    	toupper(K[i][1]) == 65 ? a[0]++ : a[1]++;
	}
	if(a[1]>=3) {
		totalNilai = 100;
	} else if(a[1] == 2) {
		totalNilai = 70;
	} else if(a[1] == 1) {
		totalNilai = 40;	
	} else{
		totalNilai = 20;
	}
	cout << totalNilai << endl;
}
