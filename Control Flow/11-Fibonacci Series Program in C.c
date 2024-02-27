//Fibonacci Series Program in C
#include <stdio.h>

int main(){

    int x, a = 1, b = 1;  //Created variables
    printf("Please enter how many elements of the fibonacci series will be written: ");
    scanf("%d",&x); //Received the variable from the user

    for (int i = 0; i < x; i++) 
    {
        if (i == 0)
        {
            printf("0 "); // The first value of the fibonacci series is 0
        }
        else if (i == 1)
        {
            printf("1 "); // The second value of the fibonacci series is 1
        }
        else // The rest of the series is calculated below
        {
            printf("%d ",a);
            a = a+b;
            b = a-b;
        }
        
        
    }
    

}

