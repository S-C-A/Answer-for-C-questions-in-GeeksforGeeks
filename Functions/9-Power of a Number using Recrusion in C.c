//Power of a Number using Recrusion in C
#include <stdio.h>

int power(int, int);

int main(){

    int num, pow;
    printf("Please enter the base number: ");
    scanf("%d", &num);
    printf("Please enter the power: ");
    scanf("%d", &pow);

    printf("%d^%d is %d!", num, pow, power(num, pow));
}

int power(int num, int pow){

    if (pow == 0)
    {
        return 1;
    }
    return num * power(num,pow-1);
}