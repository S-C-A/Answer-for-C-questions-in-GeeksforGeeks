//C Program to Check Vowel or Consonant
#include <stdio.h>

int main(){

    char letter; // Created a variable
    printf("Please enter a character: ");
    scanf("%c", &letter); // Received the variable

    if ( letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' // Checks if the character is a vowel
        || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O'
        || letter == 'u' || letter == 'U')
    {
        printf("The character is a vowel!");
    }
    else // If it's not a vowel then it must be a consonent
    {
        printf("The character is a consonant!");
    }
    


}