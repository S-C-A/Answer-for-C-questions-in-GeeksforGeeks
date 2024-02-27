//C Program to Generate Multiplication Table
#include <stdio.h>

int main(){

    int x,range; // Created variables
    printf("Please enter a number: ");
    scanf("%d",&x); // Received the variable
    printf("Please the range of the multiplication table: ");
    scanf("%d",&range); // Received the range

    for (int i = 1; i <= range; i++) // Creates the table
    {
        printf("%d * %d = %d\n",x,i,x*i);
    }
    

}