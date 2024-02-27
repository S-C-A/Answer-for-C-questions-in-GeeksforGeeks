//Palindrome Number Program in C
#include <stdio.h>

int main(){

    int num, digit, new=0, temp;  //Created variable
    printf("Please enter the a number: ");
    scanf("%d",&num); //Received the starting value from the user

    temp = num; // Creates a copy of "num" so we can play with it while keeping the original value for the future
    
    while (temp != 0) // Reverses the number
    {
        digit = temp%10;
        new = new*10 + digit;
        temp /= 10;
    }
    
    if (new == num) // Checks if "num" is palindrome or not, then prints the result
    {
        printf("%d is a palindrome number!", num);
    }
    else
    {
        printf("%d is not a palindrome number!", num);
    }
    
    
}
