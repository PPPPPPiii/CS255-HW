#include<stdio.h>
int collatzSteps(int n){
    int counts = 1;
    while(n != 1){
        if(n % 2 == 0){
            n = n/2;
        }
        else{
            n = n*3 +1 ;
        }
        counts = counts + 1;
    }

    return counts;
}
