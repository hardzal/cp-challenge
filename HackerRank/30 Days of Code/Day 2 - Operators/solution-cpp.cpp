// https://www.hackerrank.com/challenges/30-operators/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int totalCost;
	double mealCost, tipPercent, taxPercent, tip, tax;
	cin >> mealCost >> tipPercent >> taxPercent;
	tipPercent /=100;
	taxPercent /=100;
	tip = mealCost * tipPercent;
	tax = mealCost * taxPercent;
	totalCost = round(mealCost + tip + tax);
	cout << "The total meal cost is " << totalCost << " dollars.";
	return 0;
}
