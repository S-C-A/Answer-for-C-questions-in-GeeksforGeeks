//C program to Find the Largest Number Among Three Numbers
#include <stdio.h>

int main(){

    int a,b,c, top; // Created variables
    printf("Please enter three numbers\n ");
    scanf("%d %d %d",&a, &b, &c); // Received the variables from the user

    top = a; // Sets the "Top" to "a", if other numbers aren't larger than "a" then there is no other need to change anything.

    if (b>a) // Finds the largest number
    {
        top = b;
        if (c>b)
        {
            top = c;
        }        
    }
    else if (c>a)
    {
        top = c;
    }

    printf("The largest number out of these three is: %d", top); // Prints the largest number
    
}