//C Program to Swap two Numbers
#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Please enter the first number: ");
    scanf("%d", &a); //Gets the first integer value from the user and stores it inside "a".

    printf("Please enter the second number: ");
    scanf("%d", &b); //Gets the second integer value from the user and stores it inside "b".

    a = a+b; //Swaps to numbers without creating a third variable for storage.
    b = a-b; 
    a = a-b;

    printf("First number: %d\nSecond number: %d", a,b);
}