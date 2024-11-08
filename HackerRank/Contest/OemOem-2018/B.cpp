#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* code */
    int i, n;
    cin >> n;
    long int x[n];
    for(i = 0; i < n; i++) {
        cin >> x[i];
    }
    for(i = 0; i < n; i++) {
        if(x[i] % 2 == 0 && x[i] % 3 == 0) {
            cout << "Habis dibagi 6" << endl;
        } else if(x[i] % 2 == 0) {
            cout << "Habis dibagi 2" << endl;
        } else if(x[i] % 3 == 0) {
            cout << "Habis dibagi 3" << endl;
        } else {
            cout << ":(" << endl;
        }
    }
    return 0;
}
