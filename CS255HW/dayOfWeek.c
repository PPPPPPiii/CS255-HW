#include<stdio.h>

int isLeap(int year){
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int dayOfWeek(int year, int month, int day){

    month = month - 1;
    while(month != 0){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            day = day + 31;
        }
        else if (month == 2) {
            if (isLeap(year)){ day = day + 29; }
            else{ day = day + 28; }
        }
        else{
            day = day + 30;
        }

        month = month - 1;
    }

    int y = 2000;
    while(y < year){
        if(isLeap(y)){ day = day + 366; }
        else{ day = day + 365; }
        y = y + 1;
    }

    return (day + 5) % 7;
}
