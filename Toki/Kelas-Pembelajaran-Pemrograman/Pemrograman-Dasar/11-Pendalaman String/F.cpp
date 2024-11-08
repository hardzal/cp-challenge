#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    int i, f;
    string s;
    string u = "_";
    cin >> s;
    for(i = 0; i < s.length(); i++) {
        if(isupper(s[i])) {
            s[i] = (int) tolower(s[i]);
            s.insert(i, u);
        } else if(s[i]=='_') {
            s.erase(i, 1);
            s[i] = (int) toupper(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}