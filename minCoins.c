#include<stdio.h>
#include<stdlib.h>

int minCoins(int cents){
    int quarters = cents / 25;
    int dime = (cents - quarters*25) / 10;
    int pennies = cents - quarters*25 - dime*10;

    int total = quarters + dime + pennies;

    return total;
}
