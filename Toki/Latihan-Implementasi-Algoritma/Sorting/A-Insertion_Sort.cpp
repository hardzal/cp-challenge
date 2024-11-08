#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x, i, j;
	long temp;
	cin >> x;
	vector<long> arr(x);
	for(i = 0; i < x; i++) {
		cin >> arr[i];
	}
	
	for(i = 1; i < x; i++) {
		temp = arr[i];
		j=i-1;
		while((temp<arr[j])&&(j>=0)) {
			arr[j+1] = arr[j];
			j=j-1;
			arr[j+1] = temp;
		}
	}

	for(i = 0; i < x; i++) {
		cout << arr[i] << endl;
	}
}
