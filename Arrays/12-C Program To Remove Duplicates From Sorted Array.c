//C Program To Remove Duplicates From Sorted Array
#include <stdio.h>
#include <stdlib.h>

int duplikill(int[], int);

int main(){

    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    size = duplikill(arr, size);

    printf("The sorted array \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int duplikill(int arr[], int size){

    int *new;
    int temp = 0;
    new = (int*) malloc(1*sizeof(int));
    if (new == NULL)
    {
        return 0;
        printf("No free memory to allocate");
    }
    new[0] = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] == new[temp])
        {
            continue;
        }

        temp++;
        new = realloc(new,(temp+1)*sizeof(int));
        new[temp] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (i <= temp)
        {
            arr[i] = new[i];
        }
        else
        {
            arr[i] = 0;
        }
    }
    
    free(new);
    return temp+1;
    


}
