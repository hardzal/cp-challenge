#include<iostream>
using namespace std;

int main() {
	int n, i, j, r;
	int *h;
	cin >> n;
	h = new int[n];
	for(i = 0; i < n; i++) {
		cin >> h[i];
	}
	for(i = 0; i < n; i++) {
		j=0;
		while(true) {
			j++;
			if((j*(j-1))/2 == h[i]) {
				r = j;
				break;
			}
		}
		cout << r << endl;
	}
	return 0;
}
