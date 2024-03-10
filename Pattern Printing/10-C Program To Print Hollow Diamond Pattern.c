//C Program To Print Hollow Diamond Pattern
#include <stdio.h>

void full_pyramid_degree(int, int, int);

int main(){

    int size;
    printf("Please enter a number: ");
    scanf("%d",&size);

    full_pyramid_degree(size, 1, 0);
}

void full_pyramid_degree(int size, int counter, int reverse){

    if (counter == 0)
    {        
        return;
    }
    else if (size >= counter && reverse == 0)
    {
        for (int i = 0; i < size-counter; i++)
        {
            printf(" ");
        } 
        printf("*");
        for (int i = 0; i < counter-1; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < counter-2; i++)
        {
            printf(" ");
        }
        if (counter!=1)
        {
            printf("*");
        }
        printf("\n");            
        if (size == counter)
        {
            reverse = 1;
            full_pyramid_degree(size, --counter, reverse);
        }       
        full_pyramid_degree(size, ++counter, reverse);
    }
    if (reverse == 1 && counter < size)
    {
        for (int i = 0; i < size-counter; i++)
        {
            printf(" ");
        }
        printf("*");
        for (int i = 0; i < counter-1; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < counter-2; i++)
        {
            printf(" ");
        }
        if (counter!=1)
        {
            printf("*");
        }
        printf("\n"); 
        full_pyramid_degree(size, --counter, reverse);
    }
    
}