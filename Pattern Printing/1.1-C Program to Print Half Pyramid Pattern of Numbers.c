//1-C Program to Print Half Pyramid Pattern of Numbers
#include <stdio.h>

void half_pyramid(int, int);

int main(){

    int size;
    printf("Please enter a number: ");
    scanf("%d",&size);

    half_pyramid(size, 1);
}

void half_pyramid(int size, int counter){

    if (counter > size)
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
        half_pyramid(size, ++counter);
    }
}