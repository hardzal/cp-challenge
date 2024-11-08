#include<iostream>
#include<vector>
using namespace std;

int main() {
	int i, j, m, n, p;
	cin >> m >> n;
	vector<vector <int> > arr(m);
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			cin >> p;
			arr[i].push_back(p);
		}
	}
	
	for(i = 0; i < n; i++) {
		for(j = m-1; j >= 0; j--) {
			cout << arr[j][i];
			if(j!=0) cout << " ";
		}
		cout << endl;
	}
}
