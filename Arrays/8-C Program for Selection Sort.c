#include <stdio.h>

void selection_sort(int[], int);

int main(){

    int arr[] = { 64, 25, 12, 22, 11 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("The array at the start \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    selection_sort(arr, n);

    printf("The sorted array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }   
}

void selection_sort(int arr[], int size){

    int temp, swap, temp_loc;

    for (int i = 0; i < size - 1; i++)
    {
        temp = arr[i];
        temp_loc = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < temp)
            {
                temp = arr[j];
                temp_loc = j;
            }           
        }
        swap = arr[i];
        arr[i] = temp;
        arr[temp_loc] = swap;
    }
}
