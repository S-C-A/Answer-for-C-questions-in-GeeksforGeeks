//C Program to Calculate Sum of Natural Numbers
#include <stdio.h>

int main(){

    int sum = 0, x;//Created variables for the number given by the user and the sum
    printf("Please enter a number: ");
    scanf("%d",&x); //Received the variable from the user    

    for (int i = 0; i <= x; i++) // Adds the value of the counter to the "sum" until it reaches "x"
    {
        sum += i;
    }
    
    printf("The sum of the natural numbers from 1 to %d is: %d",x,sum); // Prints the sum 

} 