#include<iostream>
#include<vector>
#include<algorithm>

#define FOR(i, n) for(i = 0; i < n; ++i)

using namespace std;

int main() {
	int i, j, N, M, x, y, temp;
	char P, Q;
	vector<vector<int>> bola(2);
	cin >> N;
	FOR(i, 2) {
		FOR(j, N) {
			cin >> temp;
			bola[i].push_back(temp);
		}
	}
	cin >> M;
	FOR(i, M) {
		cin >> P >> x >> Q >> y;
		if(P=='A' && Q=='B') swap(bola[0][x-1], bola[1][y-1]);
		else if(P=='B' && Q=='A') swap(bola[1][x-1], bola[0][y-1]);
		else if(P=='A' && Q=='A') swap(bola[0][x-1], bola[0][y-1]);
		else if(P=='B' && Q=='B') swap(bola[1][x-1], bola[1][y-1]);
	}
	FOR(i, 2) {
		FOR(j, N) {
			cout << bola[i][j];
			if(j < N-1) cout << " ";
		}
		cout << endl;
	} 
	return 0;
}