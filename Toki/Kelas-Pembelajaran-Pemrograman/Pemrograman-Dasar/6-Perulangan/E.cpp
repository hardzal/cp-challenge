#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, i = 1;
	cin >> x;
	while(x > 1) {
		if(x % 2 == 0) x /=2;
		else{ i -=1;
			break;
		}
	}
	if(i==1) cout << "ya" << endl;
	else cout << "bukan" << endl;
}
