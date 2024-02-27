//Reverse Number Program in C
#include <stdio.h>

int main(){

    int num, digit, temp=0;  //Created variable
    printf("Please enter the a number: ");
    scanf("%d",&num); //Received the starting value from the user

    while (num != 0) // Reverses the number
    {
        digit = num%10;
        temp = temp*10 + digit;
        num /= 10;
    }
    
    printf("%d",temp); // Prints it out

}
