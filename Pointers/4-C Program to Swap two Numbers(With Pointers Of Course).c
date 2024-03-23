// C Program to Swap two Numbers
#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main(){

    int a = 5, b = 10;
    int * ap = &a, *bp = &b;

    swap(&a, &b);

    printf("a: %d\nb: %d", a, b);
}

void swap(int *ap, int *bp){

    *ap = *ap + *bp;
    *bp = *ap - *bp;
    *ap = *ap - *bp;    
}