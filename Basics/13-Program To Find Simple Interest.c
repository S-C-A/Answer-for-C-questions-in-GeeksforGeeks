//Program To Find Simple Interest
#include <stdio.h>

int main(){

    float Money;
    float Timey;
    float Interest;

    printf("How much money was loaned: ");
    scanf("%d", &Money);
    printf("How much time has passed since: ");
    scanf("%d", &Timey);
    printf("How much was the interest rate?: ");
    scanf("%d", &Interest);

    printf("The interest is: %f", (Money*Timey*Interest)/100);

}