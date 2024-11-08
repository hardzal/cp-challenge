#include<iostream>
#include<vector>
using namespace std;

int main() {
	int j, n;
	vector<int> arr;
	while(cin >> n) arr.push_back(n);
	for(j = arr.size()-1; j >= 0; j--) cout << arr[j] << endl;
}
