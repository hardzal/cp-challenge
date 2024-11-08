#include <bits/stdc++.h>

using namespace std;
// Complete 100 %
int main()
{
    int n;
    int first, last;

    cin >> n;

    first = n / 10;

    if (n % 10 != 0)
    {
        last = n % 10;
    }
    else
    {
        last = 0;
    }

    cout << first << " " << last << endl;

    return 0;
}
