// https://training.ia-toki.org/problemsets/20/problems/103/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t, n, i, j, p;
    cin >> t;
    vector<long> total(t);
    vector<vector<int>> arr(t);
    for(i = 0; i < t; i++) {
        cin >> n;
        for(j = 0; j < n; j++) {
            cin >> p;
            arr[i].push_back(p);
        }
        sort(arr[i].begin(), arr[i].end());
    }

    for(i = 0; i < t; i++) {
        total[i] = 0;
        if(arr[i].size() > 5 ) {
            for(j = arr[i].size()-1; j >= arr[i].size()-5; j--) {
                total[i] += arr[i][j];
            }
        } else {
            for(j = 4; j >= 0; j--) {
                total[i] += arr[i][j];
            }
        }
        cout << total[i] << endl;
    }
}

