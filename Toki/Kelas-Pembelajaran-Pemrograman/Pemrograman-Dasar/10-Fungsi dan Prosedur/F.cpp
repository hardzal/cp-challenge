#include<iostream>
#include<vector>
#include<math.h>

#define FOR(i, n) for(i = 0; i < n; ++i)

using namespace std;

int main() {
	int N, D, i, j, temp, max, min;
	cin >> N >> D;
	vector<int>X(N);
	vector<int>Y(N);
	vector<int>T;
	FOR(i, N) {
		cin >> X[i] >> Y[i];
	}
	for(i = 0; i < N; ++i) {
		for(j = i + 1; j < N; ++j) {
			temp = pow(abs(X[j] - X[i]), D) + pow(abs(Y[j] - Y[i]), D);
			T.push_back(temp);
		}
	}
	max = T[0];
	min = T[0];
	for(i = 1; i < T.size(); i++) {
		if(T[i] > max) {
			max = T[i];
		}
		if(T[i] < min) {
			min = T[i];
		}
	}

	cout << min << " " << max << endl;
	return 0;
}