//C Program to Make a Simple Calculator
#include <stdio.h>

int main(){

    int ch, a, b;  //Created variable for choice
    printf("Please enter the first number: ");
    scanf("%d",&a); //Received the first value from the user
    printf("Please enter the second number: ");
    scanf("%d",&b); //Received the second value from the user
    printf("1 for Addition\n2 for substraction\n3 for multiplication\n4 for division\nPlease enter a number to choose an operation: ");
    scanf("%d",&ch); //Received the choice value from the user

    switch (ch)
    {
    case 1:
        printf("%d + %d is: %d",a, b, a+b); // For addition
        break;
    case 2:
        printf("%d - %d is: %d",a, b, a-b); // For substraction
        break;
    case 3:
        printf("%d * %d is: %d",a, b, a*b); // For multiplication
        break;
    case 4:
        printf("%d / %d is: %d, and %d remains after",a, b, a/b, a%b); // For division
        break;    
    default:
        printf("You didn't make a choice :|"); // If none of the above are chosen
        break;
    }



}