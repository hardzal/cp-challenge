// https://www.hackerrank.com/challenges/c-tutorial-for-loop
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a >> b;
    if(b >= a){
        for(int i=a;i <= b;i++){
            if((i >= 1)&&(i <= 9)){
                switch(i){
                    case 1:
                        cout << "one";
                        break;
                    case 2:
                        cout << "two";
                        break;
                    case 3:
                        cout << "three";
                        break;
                    case 4: 
                        cout << "four";
                        break;
                    case 5:
                        cout << "five";
                        break;
                    case 6:
                        cout << "six";
                        break;
                    case 7:
                        cout << "seven";
                        break;
                    case 8:
                        cout << "eight";
                        break;
                    case 9:
                        cout << "nine";
                        break;
                    default:
                        cout << "zero";
                }
                cout << "\n";
            }else if(i > 9){
                if(i % 2 == 0){
                    cout << "even\n";
                }else {
                    cout << "odd\n";
                }
            }
        } 
    }                      
    return 0;
}

