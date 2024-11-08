#include <iostream>

using namespace std;

int main()
{
	int i;
    double total = 0, p;
    for(i = 0; i < 12; i++) {
    	cin >> p;
    	total+=p;
	}
	cout << "$" << total / 12.0 << endl;
    return 0;
}
