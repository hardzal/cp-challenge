#include <iostream>

using namespace std;

int main()
{
	string word, r = "Halo Dunia";
	int j=0;
	getline(cin, word);
	for(int i=0;i < word.length(); i++) {
		if(tolower(word[i])==tolower(r[i])) j++;
	}
	cout << j << endl;
}
