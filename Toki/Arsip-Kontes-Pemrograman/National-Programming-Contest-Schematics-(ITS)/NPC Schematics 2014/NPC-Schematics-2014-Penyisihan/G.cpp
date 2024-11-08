#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int r, i, N, M, K;
	cin >> N >> M;
	vector<int> a(N);
	for(i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cin >> K;
	r = 0;
	i = 0;
	while(i < K) {
		if(N > 0) {
			r += a[i];
			a[i] = 0;
			N--;	
		} else {
			r -= M;
		}
		i++;
	}
	if(r < 0) {
		cout << "Joke Rapopo" << endl;
	} else {
		cout << r << endl;
	}
	return 0;
}
