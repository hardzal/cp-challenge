#include<iostream>
using namespace std;
int main() {
	unsigned int x[9], i, a;
	
	for(i = 0; i < 9; i++){
		cin >> x[i];
	}
	a = 3;
	for(i = 0; i < 3; i++){
		cout << x[i+(0*a)] << " " << x[i+(1*a)] << " " << x[i+(2*a)] << endl;		
	}
	
}
