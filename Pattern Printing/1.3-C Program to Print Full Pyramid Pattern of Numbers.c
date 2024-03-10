//3-C Program to Print Full Pyramid Pattern of Numbers
#include <stdio.h>

void full_pyramid(int, int);

int main(){

    int size;
    printf("Please enter a number: ");
    scanf("%d",&size);

    full_pyramid(size, 1);
}

void full_pyramid(int size, int counter){

    if (counter > size)
    {        
        return;
    }
    else if (size >= counter)
    {
        for (int i = 0; i < size-counter; i++)
        {
            printf("  ");
        }
        for (int i = 0; i < counter + (counter -1); i++)
        {
            printf("%d ", counter);
        }
        printf("\n"); 
        full_pyramid(size, ++counter);
    }
}