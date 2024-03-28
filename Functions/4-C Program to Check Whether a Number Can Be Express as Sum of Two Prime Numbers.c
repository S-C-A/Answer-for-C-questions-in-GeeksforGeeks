//C Program to Check Whether a Number Can Be Express as Sum of Two Prime Numbers
#include <stdio.h>

int isprime(int);

int main(){

    int num, flag = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num-1; i++)
    {
        if (isprime(i) == 1)
        {
            if (isprime(num-i) == 1)
            {
                printf("%d can be expressed as the sum of %d and %d!\n",num, i, num-i);
                flag = 1;
            }            
        }       
    }
    
    if (flag == 0)
    {
        printf("%d can't be expressed as the sum of two numbers!",num);
    }
}

int isprime(int num){

    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            return 0;
        }       
    }
    
    return 1;
}