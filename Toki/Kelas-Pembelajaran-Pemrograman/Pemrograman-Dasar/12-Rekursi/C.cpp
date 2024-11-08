#include<iostream>
using namespace std;

int formula(int A, int B, int K, int x) {
  if(K==0) {
      return x;
  } else {
      K--;
      return formula(A, B, K, abs(A*x + B));
  }
}

int main()
{
    /* code */
    int A, B, K, x;
    cin >> A >> B >> K >> x;
    cout << formula(A, B, K, x) << endl;
    return 0;
}
