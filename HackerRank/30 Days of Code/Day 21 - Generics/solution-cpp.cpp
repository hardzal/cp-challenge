#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Version 1
template <typename T>
void printArray(vector<T> x) {
    for(T i:x) cout << i << endl;
}
// Version 2
template <class T>
void printArray_(vector<T> x) {
	for(int i = 0; i < x.size(); i++) cout << x[i] << endl;
}
// version 3
void printArray__(vector<T> x) {
	for(auto itr=ar.begin(); itr!=ar.end(); itr++) cout << *itr << endl;
}
//version 3.1
void printArray___(vector<T> &t){
	copy(t.begin(), t.end(), ostream_iterator<T>(cout, "\n"));
}

int main() {
	int n;
	
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}
