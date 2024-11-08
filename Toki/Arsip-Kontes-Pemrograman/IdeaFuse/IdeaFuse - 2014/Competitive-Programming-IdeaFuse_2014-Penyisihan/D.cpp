// Problem : https://training.ia-toki.org/problemsets/25/problems/128/
#include<iostream>
using namespace std;

int fpb(int a, int b) {
	if(b==0) {
		return a;
	} else {
		return fpb(b, a % b);
	}
}

int main() {
	int x, y, a, b;
	cin >> x >> y;
	
	a = x % fpb(x, y);
	b = y % fpb(x, y);
	
	if(!a && !b && fpb(x, y) > 1) {
		cout << x / fpb(x, y) << " " << y / fpb(x, y) << endl;
	} else {
		cout << "Tidak" << endl;
	} 
}