#include <stdio.h>

void bubble(int[]);

int main(){

    int arr[8] = {7, 2, 0, 5, 1, 4, 3, 6};

    bubble(arr);

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubble(int arr[]){

    int temp;
    int swapped = 0; 

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            swapped = 1;
        }
    }

    if (swapped)
    {
        bubble(arr); 
    }
}
