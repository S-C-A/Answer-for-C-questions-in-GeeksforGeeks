#include <stdio.h>

int primee(int, int);

int main(){

    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);

    if (primee(x,2) == 1)
    {
        printf("%d is a prime number!", x);
    }
    else 
    {
        printf("%d is not a prime number!", x);
    }
    
}

int primee(int number, int  counter){


    if (number == counter)
    {
        return 1;
    }
    else if (number > counter)
    {
        if (number%counter == 0)
        {
            return 0;
        }
        primee(number,++counter);
    }

}