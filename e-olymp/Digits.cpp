#include <bits/stdc++.h>

using namespace std;
// Complete 88 %
int main()
{
    long long n, i = 0;
    cin >> n;
    while (n > 0)
    {
        i++;
        n = n / 10;
    }
    cout << i << endl;
    return 0;
}
