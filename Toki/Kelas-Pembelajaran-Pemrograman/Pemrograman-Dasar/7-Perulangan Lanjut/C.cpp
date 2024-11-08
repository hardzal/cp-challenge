#include<iostream>
using namespace std;

int main() {
	int N, i, j, k=0;
	cin >> N;
	for(i = 1; i <= N; i++) {
		for(j = 1; j <= i; j++){
			cout << k%10;
			k++;
		}
		cout << endl;
	}
}
