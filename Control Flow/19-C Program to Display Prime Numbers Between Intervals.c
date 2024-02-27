//C Program to Display Prime Numbers Between Intervals
#include <stdio.h>

#include <stdio.h>

int main(){

    int str, end, check;  //Created variables
    printf("Please enter the starting point: ");
    scanf("%d",&str); //Received the starting value from the user
    printf("Please enter the ending point: ");
    scanf("%d",&end); //Received the ending value from the user




    for (int i = str; i <= end; i++) // Creates a loop to try each number from 2 to the chosen number.
    {
        check = 1; 
        for (int k = 2; k < i; k++)
        {
            if (i%k == 0)
            {
                check = 0; 
                break;
            }
        }        
        if (check == 1)
        {
            printf("%d is a prime number\n",i);
        }
        
    }

}
