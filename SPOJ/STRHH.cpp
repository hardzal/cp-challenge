// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/STRHH

#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int x, y, z;
	char word[200][200];
	// your code here
	cin >> x;
	for(y = 0; y < x; y++) {
		cin >> word[y];
	}
	for(y = 0; y < x; y++){
		for(z = 0; z < strlen(word[y])/2; z++){
			if(z % 2 == 0) {
				cout << word[y][z];
			}
		}
		cout << endl;
	}
	return 0;
}
