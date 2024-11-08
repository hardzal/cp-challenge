#include <iostream>
using namespace std;

bool isPrime(long x) {
    if(x < 2) return false;
    int i = 2;
    while(i*i <= x) {
    	if(x % i == 0) return false;
    	i++;
	}
    return true;
}

int main(){
    long n;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
    	cin >> n;
	   	isPrime(n) ? cout << "YA" : cout << "BUKAN";
    	cout << endl;
    }
}
