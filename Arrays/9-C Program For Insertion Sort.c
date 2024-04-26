//9-C Program For Insertion Sort
#include <stdio.h>

void insertion_sort(int[], int);

int main(){

    int arr[] = { 64, 25, 12, 22, 11 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("The array at the start \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    insertion_sort(arr, n);

    printf("The sorted array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }   
}

void insertion_sort(int arr[], int size){

    for (int i = 1; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    




}