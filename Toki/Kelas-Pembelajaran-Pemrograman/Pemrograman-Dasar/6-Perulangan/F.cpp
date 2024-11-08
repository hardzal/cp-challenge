#include<iostream>
using namespace std;

int main() {
	int N, i;
	cin >> N;
	for(i = 1; i <= N/2; i++) {
		if(N % i == 0) cout << N / i << endl;
	}
	cout << N / N << endl;
	return 0;
}
