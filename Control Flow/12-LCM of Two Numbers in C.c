//LCM of Two Numbers in C
#include <stdio.h>

int main(){

    int a,b;
    printf("Please enter the first number: ");
    scanf("%d",&a); //Received the first value from the user
    printf("Please enter the second number: ");
    scanf("%d",&b); //Received the second value from the user

    for (int i = a>b ? b : a; i <= a*b; i++) //The counter starts from the smallest value between the two 
    {
        if (i%a == 0 && i%b == 0) //Checks if the current counter is the LCM of the two values
        {
            printf("The LCM of %d and %d is: %d", a, b, i); //If the LCM is found it prints and breaks the loop
            break;
        }
        
    }
    




}