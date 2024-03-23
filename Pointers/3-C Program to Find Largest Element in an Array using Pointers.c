// C Program to Find Largest Element in an Array using Pointers
#include <stdio.h>
#include <stdlib.h>

void array_max(int*, int[], int);

int main(){

    int arr[5];
    int *max;

    for (int i = 0; i < 5; i++)
    {
        printf("Please enter %dth element of the array: ",i+1);
        scanf("%d", &arr[i]);
    }
    
    array_max(max,arr,5);

    printf("The largest number in this array is: %d", *max);
}

void array_max(int *max, int arr[], int limit){

    *max = arr[0];

    for (int i = 1; i < limit; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        
    }

}