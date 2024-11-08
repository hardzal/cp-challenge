// 100 Point
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

bool palindrome(string word) {
    if(word.length()==0) {
        return true;
    } else {
        char d = word[0];
        char b = word[word.length()-1];
        if(d != b) {
            return false;
        } else {
            string s = word.substr(1, word.length()-2);
            return palindrome(s);
        }
    }
}

int main()
{
    /* code */
    string x;
    cin >> x;
    if(palindrome(x)) {
        cout << "YA" << endl;
    } else {
        cout << "BUKAN" << endl;
    }
    return 0;
}
