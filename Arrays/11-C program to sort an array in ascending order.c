//C program to sort an array in ascending order
//I used Mergesort but anything is fine really
#include <stdio.h>

void mergesort(int[], int, int);
void merge(int[], int, int, int);


int main(){

    int arr[] = { 0, 23, 14, 12, 9 }; 
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("The array at the start \n");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    mergesort(arr,0,arr_size-1);

    printf("The sorted array \n");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ",arr[i]);
    }
}

void mergesort(int arr[], int left, int right){

    if (right > left)
    {
        int mid = left + (right - left)/2;

        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);

        merge(arr,left,mid,right);
    }
}

void merge(int arr[], int left, int mid, int right){

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) 
        L[i] = arr[left + i]; 

    for (int j = 0; j < n2; j++) 
        R[j] = arr[mid + 1 + j];     

    int temp = left;
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[temp] = L[i];
            i++;
        }
        else
        {
            arr[temp] = R[j];
            j++;
        }
        temp++;
    }

    while (i < n1) { 
        arr[temp] = L[i]; 
        i++; 
        temp++; 
    } 
   
    while (j < n2) { 
        arr[temp] = R[j]; 
        j++; 
        temp++; 
    } 
}