//2-C Program to Print Inverted Half Pyramid of Numbers
#include <stdio.h>

void half_pyramid(int, int);

int main(){

    int size;
    printf("Please enter a number: ");
    scanf("%d",&size);

    half_pyramid(size, size);
}

void half_pyramid(int size, int counter){

    if (counter < 1)
    {        
        return;
    }
    else if (size >= counter)
    {
        for (int i = 0; i < counter; i++)
        {
            printf("%d", counter);
        }
        printf("\n"); 
        half_pyramid(size, --counter);
    }
}