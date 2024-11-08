#include<iostream>
using namespace std;

int main() {
	int K, N;
	cin >> K >> N;
	cout << "Think of a number, any number\nMultiply it by "<< K << "\nAdd " << K*N << " to your number\nNow, divide your total by "<< K << "\nFinally, subtract the result from the first number you pick\nBRAVO!!!\nYour answer is "<< N << "\n";
	return 0;
}
