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
	
	for(i = 0; i < x-1; i++) {
		for(j = 0; j < x-1-i; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(i = 0; i < x; i++) {
		cout << arr[i] << endl;
	}
}
