//C Program to Print Armstrong Numbers Between 1 to 1000
#include <stdio.h>

int length(int); //Finds how many digits are in the value given by the user

int main(){

    int len, arm, digit, kc;  //Created variables
 
    for (int k = 1; k <= 1000; k++)
    {

        arm = 0;
        len = length(k); // Stores the current digit number in "len"
        kc = k; //Stores the copy of "k" in "kc(opy)" so that we can change the value of "x" but can still play with it

        for (int i = 0; i < len; i++) 
        {
            digit = 1;
            for (int t = 0; t < len; t++)
            {   
                digit *= kc%10; // Finds the adequate power of the current digit
            }
            arm += digit; // Stores the calculation
            kc /= 10; // Switches to the next digit
        }
        
        if (k == arm) // Checks if "arm" is equal to the original value
        {
            printf("%d is an armstrong number!\n", k);
        }
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