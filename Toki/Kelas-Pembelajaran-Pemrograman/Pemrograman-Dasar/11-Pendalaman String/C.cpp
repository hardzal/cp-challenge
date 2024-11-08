#include<iostream>
using namespace std;
static const string abjad = "abcdefghijklmnopqrstuvwxyz";

int main() {
	string s;
	int x, i;
	getline(cin, s);
	cin >> x;
	if(s.length() <= 100) {
		for(i = 0; i < s.length(); i++) {
			if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] = abjad[(s[i] + x - 97) % 26];
			}
		}
		cout << s << endl;
	}
	return 0;
}
