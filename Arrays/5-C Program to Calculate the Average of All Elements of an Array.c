//C Program to Calculate the Average of All Elements of an Array
#include <stdio.h>

int main(){

    int arr[5], ave = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Please enter the %dth array element: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        ave += i[arr];
    }
    
    printf("The average of all the elements of the array is: %d", ave/5);



}