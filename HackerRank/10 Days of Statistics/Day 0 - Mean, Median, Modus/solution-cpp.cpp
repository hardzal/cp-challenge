// https://www.hackerrank.com/challenges/s10-basic-statistics
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, i, j, fMod, fModmax;
    long temp, mode;
    bool angkaSama;
    vector<long> data;
    long double mean, median, total;
    cin >> n;
    total = 0;
    data.resize(n);
    for(i = 0; i < n; i++) {
        cin >> data[i];
        total += data[i];
    }
    mean = total / n;
    // sorting in quick way
    sort(data.begin(), data.end()); 
    mode = data[0];
    fMod = 1;
    fModmax = 1;
    for(i = 0; i < n-1; i++) {
    	if(data[i] == data[i+1]) {
    		fMod++;
		} else {
			fMod=1;
		}
		if(fMod > fModmax) {
			fModmax = fMod;
			mode = data[i];
		}
	}

    if(n % 2 == 0) {
        median = (data[(n / 2)-1] + data[(n / 2)])/2.0;
    } else {
        median = data[n / 2];
    }
    cout << endl;
    cout << mean << endl << median << endl << mode;
    return 0;
}

