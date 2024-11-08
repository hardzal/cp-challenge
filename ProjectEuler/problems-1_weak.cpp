#include<iostream>

using namespace std;

int main() {
    int i = 0, j = 0;
    unsigned long long int total = 0;

    for(i = 1; i <= 999; i++) {
        if(i % 3 == 0 || i % 5 == 0) total += i;
    }
    cout << total << endl;

    return 0;
}
