//Program to Print Alphabets From A to Z Using Loop
#include <stdio.h>

int main(){

    int x = 65; // 65 is the equivilent of 'A' on the ASCII table

    for (int i = 0; i < 26; i++) // The loop works 26 times for all the letters
    {
        printf("%2c", x); //Prints the current letter
        x++; // Increases "x" to switch it to the next number
    }
    


}