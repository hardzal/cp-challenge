// Accepted
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    /* code */
    int x, r = 0, i = 1;
    cin >> x;
    while(x >= pow(5, i)) {
        r = r + (x/(pow(5, i)));
        i++;
    }
    cout << r << endl;
    return 0;
}
