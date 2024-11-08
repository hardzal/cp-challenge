// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    // your code goes here
    if(n > 9){
        printf("Greater than 9");
    }else if(n >= 1 && n <= 9){
        switch(n){
            case 1:
                printf("one");
            break;
            case 2:
                printf("two");
            break;
            case 3:
                printf("three");
            break;
            case 4:
                printf("four");
            break;
            case 5:
                printf("five");
            break;
            case 6:
                printf("six");
            break;
            case 7:
                printf("seven");
            break;
            case 8:
                printf("eight");
            break;
            case 9:
                printf("nine");
            break;
            default:
                printf("You're Fooling use!");
            break;
        }
    }else{
        printf("Do Nothing");
    }
    return 0;
}

