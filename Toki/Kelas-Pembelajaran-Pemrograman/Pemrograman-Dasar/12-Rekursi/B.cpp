#include<iostream>
using namespace std;

int faktorial(int x) {
    if(x == 1) {
        return 1;
    } else {
        if(x % 2) {
            return (x * faktorial(x-1));
        } else {
            return (x/2 * faktorial(x-1));
        }
    }
}

int main() {
    int i, f;
    cin >> f;
    cout << faktorial(f) << endl;   
    return 0;
}