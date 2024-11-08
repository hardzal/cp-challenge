#include<iostream>
#include<vector>
using namespace std;
// https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/13/problems/48/
int faktorPrima(long int x) {
    long int i;
    if(x < 2) {
        return false;
    } else {
        i = 2;
        while(i*i<=x){
            if(x % i == 0) return false;
            i++;
        }
        return true;
    }      
}

int main() {
    long int x, i;
    int j;
    bool check = false;
    vector<int> arr1;
    vector<long int> arr;
    cin >> x;
    i = 2;
    j = 0;
    while(true) {
        if(x % i == 0) {
            if(faktorPrima(i)) {
                j++;      
                check=true;
            }
            x = x / i;
        } else {
            if(check) {
                arr1.push_back(j);
                arr.push_back(i);
                j=0;
                check=false;
            }
            i++;
            if(x==1) {break;}
        }
    }
    
    for(i = 0; i < arr.size(); i++) {
        if(arr1[i] > 1) {
            cout << arr[i] << "^" << arr1[i]; 
        } else {
            cout << arr[i];
        }
        if(i<arr.size()-1) cout << " x ";
    }
    cout << endl;
}