//GCD of Two Numbers in C
#include <stdio.h>

int GCD(int, int);

int main(){

    int num1, num2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int Great = GCD(num1, num2);
    printf("The greatest common divisor of %d and %d is %d!", num1, num2, Great);
}

int GCD(int num1, int num2){

    for (int i = num1 > num2 ? num2 : num1; i > 0; i--)
    {
        if (num1%i == 0 && num2%i == 0)
        {
            return i;
        }        
    }
}