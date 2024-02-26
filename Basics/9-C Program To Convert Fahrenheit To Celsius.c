//C Program To Convert Fahrenheit To Celsius
#include <stdio.h>

int main(){

    int fah; 
    printf("Enter the Fahrenheit value: ");
    scanf("%d", &fah); //Gets the Fahrenheit value.

    float cel = (fah - 32) * (0.5555); //Calculates the Celsius value and stores it in "cel" variable. 

    printf("The Celsius value of %d fahrenheit is: %.2f", fah, cel); 

}