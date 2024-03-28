//C Program to Reverse a Stack using Recursion
#include <stdio.h>

int reverse(int);

int main(){

    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    printf("%d\n", reverse(num));
}

int reverse(int num){

    static int new = 0;
    int temp;
    
    if (num < 10)
    { 
        return new*10 + num;
    }
    temp = num%10;
    new = new*10 + temp;
    reverse(num/10);

}