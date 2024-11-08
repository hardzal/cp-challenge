#include<iostream>
using namespace std;

void gunungTingkat(int n) {
	int i, j;
	if(n > 1){
		gunungTingkat(n - 1);
	}
	for(i = 0; i < n; i++) {
		cout << "*";
	}
	cout << endl;
	if(n > 1) {
		gunungTingkat(n - 1);
	}
}

int main() {
	int i, j, x;
	cin >> x;
	gunungTingkat(x);
	return 0;
}