#include<iostream>
using namespace std;

long reverse(long x) {
    long temp = x;
    long it = 0;
    while(temp > 0) {
        it = (it * 10) + temp % 10;
        temp = temp / 10;
    }
    return it;
}

int main() {
    long a, b;
    cin >> a >> b;
    cout << reverse(reverse(a) + reverse(b)) << endl;
}