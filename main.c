#include <stdio.h>
#include "NumClass.h"

int main()
{
int main(){
    int num1,num2;
    scanf("%d %d",&num1 , &num2);
    
    printf("The Armstrong numbers are:\n");
    for(int i=num1;i<=num2;i++){
        if (isArmstrong(i)){
        printf(" %d", i);
        }
    }
    printf("The Palindromes are:\n");
    for(int i=num1;i<=num2;i++){
        if (isPalindrome(i)){
            printf(" %d", i);
        }
    }
    printf("The Prime numbers are:\n");
    for(int i=num1;i<=num2;i++){
        if (isPrime(i)){
            printf(" %d", i);
        }
    }
    printf("The Strong numbers are:");
    for(int i=num1;i<=num2;i++){
        if (isStrong(i)){
            printf(" %d", i);
        }
    }
    return 0;
}
}