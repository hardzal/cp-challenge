#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long n, temp, new_temp, post, low, rest;
    cin >> n;
    vector<long> m;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        low = 0;
        post = 0;
        for(int j = 0; j < temp; j++) {
            cin >> new_temp;
            if(low == 0) {
                low = new_temp;
            } else if(new_temp <= low) {
                low = new_temp;
            }
            post += new_temp;
        }
        rest = post - (low * temp);
        m.push_back(rest);
    }

    for(int i = 0; i < m.size(); i++) {
        cout << m[i] << endl;
    }
    return 0;
}
