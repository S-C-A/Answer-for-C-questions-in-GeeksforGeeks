//C Program To Merge Two Arrays
#include <stdio.h>

int main(){

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10}; 

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int size3 = size1 + size2;
    int arr3[size3];

    for (int i = 0; i < size3; i++)
    {
        if (i+1 <= size1)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i-size1];
        }
    }

    printf("The new array \n");
    for (int i = 0; i < size3; i++)
    {
        printf("%d ", arr3[i]);
    }    

}