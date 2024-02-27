//Factorial Program in C
#include <stdio.h>

int main(){

    int x, fact = 1;  //Created variables
    printf("Please enter a number: ");
    scanf("%d",&x); //Received the variable from the user

    for (int i = x; i > 0; i--) // Calculates the factorial 
    {
        fact *= i;
    }
    
    printf("The factorial of %d is: %d",x,fact); // Prints the result
    
}