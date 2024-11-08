https://www.hackerrank.com/challenges/30-scope
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
  	// Add your code here
    Difference(vector<int> listArray) {
        this->elements = listArray;
    }

    void computeDifference() {
        int length = this->elements.size();
        int temp, a, b;
        vector<int> arr;
        arr = this->elements;
        temp = 0;
        for(int i = 0; i < length-1; i++) {
            for(int j = 0; j < length-1; j++) {
                a = abs(arr[i] - arr[j+1]);
                if(a > temp) {
                    temp = a;
                }
            } 
        }
        this->maximumDifference = temp;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
    
    
