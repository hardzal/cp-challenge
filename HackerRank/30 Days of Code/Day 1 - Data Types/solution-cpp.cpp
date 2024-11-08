// https://www.hackerrank.com/challenges/30-data-types
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	// Declare second integer, double, and String variables.
	int numbers;
	double numberz;
	string word;
	//char word[100];
	// Read and save an integer, double, and String to your variables.
	// Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
	cin >> numbers >> numberz;
	getline(cin >> ws, word);
	//  cin.ignore();
	// cin.get(word, sizeof(word));
	// Print the sum of both integer variables on a new line.
	cout << i + numbers;
	// Print the sum of the double variables on a new line.
	cout << endl << fixed << setprecision(1) << d + numberz << endl;
	// Concatenate and print the String variables on a new line
	// The 's' variable above should be printed first.
	cout << s + word;
	return 0;
}
