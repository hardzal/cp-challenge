#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, i, total=0;
	cin >> x;
	vector<int> n(x);
	for(i = 0; i < x; i++) {
		cin >> n[i];
		total+=n[i];
	}
	cout << total << endl;
}
