#include <iostream>
#include <string>
using namespace std;
void swap(string a, string b) {
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << endl;
}
int main() {
   // Complete the program
    string a, b;
    
    getline(cin, a);
    getline(cin, b);
    
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    swap(a, b);
    return 0;
}

