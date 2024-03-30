//C Program For Maximum and Minimum of an Array
#include <stdio.h>
#include <stdlib.h>

void min_max(int[], int *, int);

int main(){

    int arr[5] = {-5, -775, 0, 65, 4};
    int *result = (int*)calloc(2,(sizeof(int)));
    if (result == NULL)
    {
        printf("No fitting memory available!");
        return 0;
    }

    min_max(arr,result,5);
    
    printf("The largest element in the array is: %d\n", result[0]);
    printf("The largest element in the array is: %d\n", result[1]);
    free(result);
}

void min_max(int arr[], int *result, int limit){

    result[0] = arr[0];
    result[1] = arr[0];

    for (int i = 1; i < limit; i++)
    {
        if (result[0] > arr[i])
        {
            result[0] = arr[i];
        }

        if (result[1] < arr[i])
        {
            result[1] = arr[i];
        }        
    }
    
}