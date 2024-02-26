//C Program To Find Area And Perimeter of Rectangle
#include <stdio.h>

int main(){

    int a,b;

    
    printf("Please enter the first side: ");
    scanf("%d", &a); //Gets the first value from the user and stores it inside "a".

    printf("Please enter the second side: ");
    scanf("%d", &b); //Gets the second value from the user and stores it inside "b".

    printf("The perimeter of your rectangle is: %d\n", 2*(a+b));
    printf("The area of your rectangle is: %d\n", a*b);





}