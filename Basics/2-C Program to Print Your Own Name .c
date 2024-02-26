//The program to print your own name.
#include <stdio.h>

int main(){

    char name[40]; //Creates a char array to store the name.
    printf("Please enter your name: ");
    gets(name); // Gets the name and stores in the "name" char array.

    printf("My name is %s", name); //Prints the name.



}