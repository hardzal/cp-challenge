#include<iostream>
#include<math.h>
using namespace std;

int formula(int A, int B, int K, int x) {
    while(K--) {
        x = abs(A*x + B);
    }
    return x;
} 

int main()
{
    /* code */
    int A, B, K, x;
    cin >> A >> B >> K >> x;
    cout << formula(A, B, K, x) << endl;
    return 0;
}