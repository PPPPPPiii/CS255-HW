#include<stdio.h>
#include<stdlib.h>

double minCoins(double input){
    double cents = input / 100;
    int quarters = cents / 0.25;
    
    int dime = (cents - quarters*0.25)/0.1;

    double pennies = (cents - quarters*0.25 - dime*0.1)/0.01;

    double total = quarters + dime + pennies;

    return total;
}
