// Problem : https://training.ia-toki.org/problemsets/25/problems/127/
#include<iostream>
#include<string>
using namespace std;

int main() {
	string n;	
	getline(cin, n); 

	int found = n.find("ideafuse");
	
	if(found!=-1) {
		cout << found+1 << endl;
	} else {
		cout << -1 << endl;
	}
}