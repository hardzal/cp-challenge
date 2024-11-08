// https://www.hackerrank.com/challenges/30-review-loop
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x;
    string word[100], word1[100], word2[100];
	cin >> x;
    cin.ignore();
	for(int y = 0; y < x; y++){
        getline(cin, word[y]);
    }
    
    for(int i = 0; i < x ; i++){
    	
    	for(int j = 0; j < word[i].length() ; j++){
    		if(j%2 == 0){
    			word1[i] += word[i][j];
			}else{
				word2[i] += word[i][j];
			}
		}
	}
	
	for(int p = 0; p < x; p++){
		cout << word1[p] << " " << word2[p] << endl;
	}
    return 0;
}
