#include<iostream>
#include<vector>
using namespace std;

int main() {
	int x, y[2], i, j, p, a;
	cin >> x >> y[0] >> y[1] ;
	vector< vector<int> >mtrA(x);
	for(i = 0; i < x; i++) {
		for(j = 0; j < y[0]; j++) {
			cin >> p;
			mtrA[i].push_back(p);
		}
	}
	vector< vector<int> >mtrB(y[0]);
	for(i = 0; i < y[0]; i++) {
		for(j = 0; j < y[1]; j++) {
			cin >> p;
			mtrB[i].push_back(p);
		}
	}
	vector<vector<int> >mtr(x);
	for(i = 0; i < x; i++) {
		for(j = 0; j < y[1]; j++) {
			mtr[i].push_back(0);
			for(a = 0; a < y[0]; a++) {
				mtr[i][j] = mtr[i][j] + (mtrA[i][a]*mtrB[a][j]);
			}
			cout << mtr[i][j];
			if(j < y[1]-1) cout << " ";
		}
		cout << endl;
	}
} 

