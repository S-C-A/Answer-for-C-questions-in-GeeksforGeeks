//The program to check whether a number is prime or not.
#include <stdio.h>

int main(){

    int num; //Creates a integer variable.
    printf("Please enter a number: ");
    scanf("%d",&num); //Gets the integer variable.

    for (int i = 2; i < num; i++) // Creates a loop to try each number from 2 to the chosen number.
    {
        if (num%i == 0) //Checks if there are any leftovers after the divide. If there is none then it means the number isn't a prime.
        {
            printf("The number is not a prime!");
            return 0; // Finishes the program after declaring the number isn't prime.
        }
        
    }
    
    printf("The number is a prime!");



}