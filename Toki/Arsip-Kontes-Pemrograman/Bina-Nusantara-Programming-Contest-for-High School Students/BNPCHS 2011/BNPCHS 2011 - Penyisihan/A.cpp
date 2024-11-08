// Problems : https://training.ia-toki.org/problemsets/21/problems/105/
#include<iostream>
using namespace std;

int main() {
    int n, i;
    int *arr, *result;
    cin >> n;
    arr = new int[n];
    result = new int[n];
    for(i = 0; i < n; i++) {
        cin >> arr[i];
        result[i] = 6*arr[i]*arr[i] - (12*(arr[i]-1)+4);
    }

    for(i = 0; i < n; i++) {
        cout << result[i] << endl;
    }
}