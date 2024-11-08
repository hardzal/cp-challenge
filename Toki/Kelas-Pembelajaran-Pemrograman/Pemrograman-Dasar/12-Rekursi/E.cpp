#include<iostream>
using namespace std;

void toBin(long x) {
    if(x > 1) {
        toBin(x/2);
    }
    cout << x % 2;
}

int main()
{
    long x;
    cin >> x;
    toBin(x);
    cout << endl;
    cin.get();
    return 0;
}