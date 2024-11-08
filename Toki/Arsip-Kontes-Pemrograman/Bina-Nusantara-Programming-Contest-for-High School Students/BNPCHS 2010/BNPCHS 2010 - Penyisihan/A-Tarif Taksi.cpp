// https://training.ia-toki.org/problemsets/20/problems/102/
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t, i;
    cin >> t;
    vector<int> a(t), b(t);
    vector<long> l(t);
    vector<long> total(t);
    for(i = 0; i < t; i++) {
        cin >> a[i] >> b[i] >> l[i];
        if(l[i] > 2000)
            total[i] = a[i] + (b[i]*((l[i]-2000)/100));
        else
            total[i] = a[i];
    }

    for(i = 0; i < t; i++) cout << total[i] << endl;
}
