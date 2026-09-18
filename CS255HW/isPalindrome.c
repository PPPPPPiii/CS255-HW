#include<stdio.h>

int isPalindrome(const char s[]){
    int left = 0;
    int right = 0;
    while (s[right]!= '\0'){
        right = right + 1; 
    }

    right = right -1;

    while(left<right){
        while(s[left] == ' '){
            left = left +1;
        }
        while(s[right] == ' '){
            right = right -1;
        }
        if(s[left]!= s[right]){
            return 0;
        }
        left = left +1;
        right = right -1;
    }
    return 1;
}
