//C Program to Find Sum of Natural Numbers using Recursion
#include <stdio.h>

int sum(int);

int main(){

    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    int natsum = sum(num);
    printf("The sum of natural numbers until %d is %d!", num, natsum);
}

int sum(int num){

    if (num == 1)
    {
        return 1;
    }
    return num + sum(num-1);
}