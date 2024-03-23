//How to return a Pointer from a Function in C
#include <stdio.h>

int* function();

int main(){


    int* P;
    P = function();
    printf("%u\n", P);
    printf("%d", *P);   

}

int* function(){

    static int num = 5; //By declaring the variable "Static", we prevent it from disappearing after the function ends.
    return &num;


}