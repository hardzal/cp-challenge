#include<iostream>
#include<string>
using namespace std;

int main() {
	string x, y;
	int i, j;
	cin >> x >> y;
	i = 0;
	size_t cari;
	while(true) {
		cari = x.find(y);
		if(cari!=string::npos) {
			x.erase(cari, y.length());
		} else {
			break;
		}
	}

	cout << x << endl;
	return 0;
}