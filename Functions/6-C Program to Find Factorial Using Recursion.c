//C Program to Find Sum of Natural Numbers using Recursion
#include <stdio.h>

int fact(int);

int main(){

    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    int factorial = fact(num);
    printf("The factorial of %d is %d!", num, factorial);
}

int fact(int num){

    if (num == 1 || num == 0)
    {
        return 1;
    }
    return num * fact(num-1);
}