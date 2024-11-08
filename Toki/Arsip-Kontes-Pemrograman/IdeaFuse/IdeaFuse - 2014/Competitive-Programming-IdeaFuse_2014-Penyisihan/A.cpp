// Problems : https://training.ia-toki.org/problemsets/25/problems/125/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;
	vector<int> p;
	for(i = 0; i < n; i++) {
		cin >> j;
		p.push_back(j);
	}
	
	for(i = 0; i < p.size(); i++) {
		cout << "k";
		for(j = 0; j < p[i]; j++) cout << "a";
		cout << "m";
		for(j = 0; j < p[i]; j++) cout << "e";
		cout << "h";
		for(j = 0; j < p[i]; j++) cout << "a";
		cout << "m";
		for(j = 0; j < p[i]; j++) cout << "e";
		cout << "h";
		for(j = 0; j < p[i]; j++) cout << "a";
		
		cout << endl;
	}
}