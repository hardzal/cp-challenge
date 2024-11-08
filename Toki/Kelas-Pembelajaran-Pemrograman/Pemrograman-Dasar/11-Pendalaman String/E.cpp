#include<iostream>
#include<ctype.h>
using namespace std;

int main() {
	string s;
	int i;
	cin >> s;
	for(i = 0; i < s.length(); i++) {
		if(islower(s[i])) {
			s[i] = (int) toupper(s[i]);
		} else {
			s[i] = (int) tolower(s[i]);
		}
	}
	cout << s << endl;
	return 0;
}