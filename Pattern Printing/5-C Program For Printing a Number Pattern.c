//C Program For Printing a Number Pattern
#include <stdio.h>

void pattern(int, int);

int main(){

    int x;
    printf("please enter a number: ");
    scanf("%d", &x);

    pattern(x,1);
}

void pattern(int size, int counter){

    if (counter>size)
    {
        return;
    }
    if (counter <= size)
    {
        for (int i = 0; i < size-counter; i++)
        {
            printf("  ");
        }
        int i = counter;
        for (int k = 0; k < counter; k++)
        {
            printf("%d ",i);
            i++;
        }
        i = i-2;
        for (int k = 0; k < counter-1; k++)
        {
            printf("%d ",i);
            i--;
        }
        printf("\n");
    }
    pattern(size,counter+1);
}