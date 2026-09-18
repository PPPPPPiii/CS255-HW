#include<stdio.h>
#include<stdlib.h>

int minCoins(int cents){
      int quarters = cents / 25;
    int dime = (cents - quarters*25) / 10;
    int nickels = (cents - quarters*25 - dime*10) / 5;
    int pennies = cents - quarters*25 - dime*10 - nickels*5;

    int total = quarters + dime + nickels + pennies;

    return total;
}
