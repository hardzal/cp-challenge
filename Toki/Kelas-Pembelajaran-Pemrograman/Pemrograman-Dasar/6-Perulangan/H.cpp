#include<iostream>
using namespace std;

int main() {
	int N, K, i;
	cin >> N >> K;
	if(N >= 1 && N <= 100 && K <= N) {
		for(i = 1; i <= N; i++) {
			if(i % K == 0) cout << "*";
			else {
				cout << i;
			}
			if(i != N) cout << " ";
		}
		cout << endl;
	}	
}
