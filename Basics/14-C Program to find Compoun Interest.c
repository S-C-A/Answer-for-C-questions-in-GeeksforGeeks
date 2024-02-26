//C program to find Compound Interest
#include <stdio.h>

int main() {
    double principal, rate, time, amount, CI; //Creates necessary variables.


    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter annual rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter time in years: ");
    scanf("%f", &time);

   
    amount = principal;
    for (int i = 0; i < time; i++) {  // Calculating compound interest 
        amount += amount * rate / 100;
    }
    CI = amount - principal;


    printf("Compound Interest is : %f\n", CI);     // Displaying the result

}