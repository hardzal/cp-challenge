#include<bits/stdc++.h>
using namespace std;
// maximum subsequence
int main()
{
    int i, j, k, n, jumlah, temp;
    vector<int> nilai;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> temp;
        nilai.push_back(temp);
    }
    jumlah = 0;
//    // solution 1
//    for(i = 0; i < n; i++) {
//        for(j = 0; j < n; j++) {
//            temp = 0;
//            for(k = i; k < j; k++) {
//                temp = temp + nilai[k];
//            }
//            if(temp >= jumlah) jumlah = temp;
//        }
//    }
//    // solution 2
//    for(i = 0; i < n; i++) {
//        temp = 0;
//        for(k = i; k < n; k++) {
//            temp = temp + nilai[k];
//            if(temp >= jumlah) jumlah = temp;
//        }
//    }
    // solution 3
    for(i = 0; i < n; i++) {
        temp = temp + nilai[i];
        if(temp > jumlah) {
            jumlah  = temp;
        } else if(temp < 0) {
            temp = 0;
        }
    }
    cout << jumlah << endl;
    return 0;
}
