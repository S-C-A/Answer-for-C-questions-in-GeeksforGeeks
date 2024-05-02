//C Program to Remove All Occurrences of an Element in an Array
#include <stdio.h>
#include <stdlib.h>

int kill(int[], int, int);

int main(){

    int arr[] = {1, 2, 1, 3, 1, 4, 5, 5} ; 
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;

    printf("Which number do you want to remove from the array: ");
    scanf("%d", &n);

    size = kill(arr, size, n);

    printf("The sorted array \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int kill(int arr[], int size, int target){

    int *new;
    int temp = 0;
    new = (int*) malloc(1*sizeof(int));
    if (new == NULL)
    {
        return 0;
        printf("No free memory to allocate");
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            continue;
        }
        new = realloc(new,(temp+1)*sizeof(int));
        if (new == NULL)
        {
        return 0;
        printf("No free memory to allocate");
        } 

        new[temp] = arr[i];
        temp++;
    }

    for (int i = 0; i < size; i++)
    {
        if (i < temp)
        {
            arr[i] = new[i];
        }
        else
        {
            arr[i] = 0;
        }
    }
    
    free(new);
    return temp;
    


}
