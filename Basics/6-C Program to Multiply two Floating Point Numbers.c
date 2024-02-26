//The program to multiply two floating point numbers
#include <stdio.h>

int main(){

    float a;
    float b;

    printf("Please enter the first number: ");
    scanf("%f", &a); //Gets the first float value from the user and stores it inside "a".

    printf("Please enter the second number: ");
    scanf("%f", &b); //Gets the second float value from the user and stores it inside "b".

    printf("The sum of the numbers is: %.2f", a*b); //Prints the multiplication of the floating number.



}