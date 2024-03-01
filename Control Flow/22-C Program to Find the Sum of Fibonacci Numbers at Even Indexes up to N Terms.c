// C Program to Find the Sum of Fibonacci Numbers at Even Indexes up to N Terms
// Disclaimer: I used a recrusive function in order to get better at it but it appears the program works really slow compared to
//how you would normally calculate the fibonacci series. Curious...
#include <stdio.h>

int fibo(int);

int main(){

    int end;  //Created variable
    printf("Please enter the ending point: ");
    scanf("%d",&end); //Received the ending value from the user
    
    for (int i = 0; i < end; i++)
    {
        if (i%2 == 1) //Prints only the even indexes
        {
            printf("%d ", fibo(i)); //Recrusive function to calculate fibonacci number with the current counter
        }
        

    }
}

int fibo(int x){

    if (x == 1 || x == 0)
    {
        return x;
    }
    return fibo(x-1)+fibo(x-2); // fibonacci logic

}