//Leap Year Program in C
#include <stdio.h>

int main(){

    int x;  //Created variable
    printf("Please enter the year: ");
    scanf("%d",&x); //Received the variable from the user

    if (x%400 == 0) // If it can be divided by 400 perfectly then its a leap year 
    {
        printf("%d is a leap year!", x);
    }
    else if (x%100 == 0) // If it can't be divided by 400 but can be divided by 100 perfectly then it's not a leap
    {
        printf("%d is not a leap year!", x);
    }
    else if (x%4 == 0) // If the other statements are false but if the number can be divided by 4 perfectly then it's a leao year
    {
        printf("%d is a leap year!", x);
    }
    else // If non of it is true then it's not a leap year
    {
        printf("%d is not a leap year!", x);
    }
    
    
    


}