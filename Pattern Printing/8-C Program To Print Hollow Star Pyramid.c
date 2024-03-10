//8-C Program to Print hollow pyramid of stars
#include <stdio.h>

void hollow_pyramid(int, int);

int main(){

    int size;
    printf("Please enter a number: ");
    scanf("%d",&size);

    hollow_pyramid(size, 1);
}

void hollow_pyramid(int size, int counter){

    if (counter == size)
    {        
        for (int i = 0; i < counter + (counter-2) +1; i++)
        {
            printf("*");
        }
        
    }
    else if (size > counter)
    {
        for (int i = 0; i < size-counter; i++)
        {
            printf(" ");
        }
        printf("*");
        for (int i = 0; i < 1+2*(counter-2); i++)
        {
            printf(" ");
        }
        if (counter != 1)
        {
            printf("*");
        }
        
        printf("\n"); 
        hollow_pyramid(size, ++counter);
    }
}