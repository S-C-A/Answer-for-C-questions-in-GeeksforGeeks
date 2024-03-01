//C Program To Check Neon Number
#include <stdio.h>

void neon(int);

int main(){
   
    int x;  //Created variable
    printf("Please enter a number: ");
    scanf("%d",&x); //Received the variable from the user

    neon(x);


}

void neon(int x){ //Check if the number is a neon number

    int temp = x,sum=0;


        temp = x*x;
        while (temp > 0)
        {
            sum += temp%10;
            temp /= 10;
        }
        if (x == sum)
        {
            printf("%d is a neon number!",x);
        }
        else
        {
            printf("%d is not a neon number!",x);
        }
        
        
        
}
    



