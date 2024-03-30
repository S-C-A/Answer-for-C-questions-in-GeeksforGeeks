//C Program to Find Largest Element in an Array
#include <stdio.h>

int arr_largest(int[], int);

int main(){

    int arr[5] = {-5, -775, 0, 65, 4};

    printf("The largest element in the array is: %d", arr_largest(arr, 5));
}

int arr_largest(int arr[], int limit){

    int top = arr[0];

    for (int i = 1; i < limit; i++)
    {
        if (top < arr[i])
        {
            top = arr[i];
        }      
    }
    return top;
}
