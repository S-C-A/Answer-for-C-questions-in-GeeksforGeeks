#include <stdio.h>

int main() {
    int num; //Creates a integer.
    printf("Please enter a number: ");
    scanf("%d", &num);//Gets the integer.

    for (int i = 2; i <= num; i++) {//First loop is for a counter from 2 to the number the user chose
        int prime = 1;
        
        for (int k = 2; k < i; k++) {//The second loop is for checking if the current "i" value is prime or not.
            if (i % k == 0) {
                prime = 0;//if it's not prime sets "prime" to zero.
                break;
            }
        }
        
        if (prime == 1) {//Makes sure if the number is prime or not. If so, prints it.
            printf("%d\n", i);
        }
    }
    return 0;
}
