// Problem : https://training.ia-toki.org/problemsets/25/problems/126/
#include<iostream>
using namespace std;

int main() {
	int n;
	
	cin >> n;
	if(n >= 4 && n <= 100) {
		if(n % 2) {
			cout << "Perlu" << endl;
		} else {
			cout << "Tidak" << endl;
		}
	}
}