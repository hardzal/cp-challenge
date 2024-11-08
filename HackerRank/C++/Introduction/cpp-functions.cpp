// https://www.hackerrank.com/challenges/c-tutorial-functions/
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    int sum = 0;
    if((a > b)&&(a > c)&&(a > d)){
        sum += a;
    }else if((b > c)&&(b > d)){ 
        sum += b;
    }else if(c > d){
        sum += c;
    }else{
        sum += d;
    }
    return sum;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


