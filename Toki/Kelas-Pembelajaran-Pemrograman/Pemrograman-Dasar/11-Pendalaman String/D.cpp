#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1, s2, s3, s4;
    size_t f;
    cin >> s1 >> s2 >> s3 >> s4;
    f = s1.find(s2);
    s1.erase(f, s2.length());
    f = s1.find(s3);
    s1.insert(f+s3.length(), s4);
    cout << s1 << endl;
}