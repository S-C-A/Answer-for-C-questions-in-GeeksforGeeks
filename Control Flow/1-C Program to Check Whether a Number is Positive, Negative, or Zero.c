//C Program to Check Whether a Number is Positive, Negative, or Zero
#include <stdio.h>

int main(){

    int x;  //Created variable
    printf("Please enter a number: ");
    scanf("%d",&x); //Received the variable from the user

    if (x>0) // Checks if the number is positive
    {
        printf("The number is positive!\n");
    }
    else if (x<0) // Checks if the number is negative
    {
        printf("The number is negative!");
    }
    else // If it's not positive of negative then it mush be zero
    {
        printf("The number is zero!");
    }
    
    





}