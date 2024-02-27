//C Program to Check Armstrong Number
#include <stdio.h>

int length(int); //Finds how many digits are in the value given by the user

int main(){

    int x, len, arm=0, digit, xc;  //Created variables
    printf("Please enter a number: ");
    scanf("%d",&x); //Received the variable from the user

    len = length(x); // Stores the digit number in "len"
    xc = x; //Stores the copy of "x" in "xc(opy)" so that we can change the value of "x" but can still play with it

    for (int i = 0; i < len; i++) 
    {
        digit = 1;
        for (int t = 0; t < len; t++)
        {   
            digit *= xc%10; // Finds the adequate power of the current digit
        }
        arm += digit; // Stores the calculation
        xc /= 10; // Switches to the next digit
    }
    
    if (x == arm) // Checks if "arm" is equal to the original value
    {
        printf("%d is an armstrong number!", x);
    }
    else
    {
        printf("%d is not an armstrong number!", x);
    }
    
}

 int length(int x){

    int i;
    for (i = 1; 1; i++)
    {
        x /= 10;
        if (x == 0)
        {
            break;
        }
        
    }
    
    return i;
 }