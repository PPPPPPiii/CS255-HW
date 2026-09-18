#include<stdio.h>

struct Stats{
    int min;
    int max;
    long sum;
    double mean;
};

struct Stats computeStats(const int a[],int n){
    int min = a[0];
    int max = a[0];
    long sum = 0;
    double mean;
    for(int i = 0;i < n;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }

        sum = sum + a[i];
    }

    mean = (double)sum / n;

    struct Stats result;
    result.min = min;
    result.max = max;
    result.sum = sum;
    result.mean = mean;
    return result;
}
