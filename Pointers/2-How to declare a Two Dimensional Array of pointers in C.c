// How to declare a Two Dimensional Array of pointers in C
// I created a matrix of pointers with dynamic memory here since creating a normal pointer matrix is functionally
//no different than creating a normal array matrix as the memory will be static again.
#include <stdio.h>
#include <stdlib.h>

int main(){

    int **arr; // Creates a pointer that points to pointers

    arr = (int **)malloc(3*(sizeof(int *))); // Allocates memory for the pointer pointer, 3 in this case as our matrix is 3x3.

    for (int i = 0; i < 3; i++) // Allcates memory for the each individual pointer, 3 again.
    {
        arr[i] = (int *)malloc(3*(sizeof(int)));
    }
    
    int count = 1; // This variable exists just to fill the matrix.
    for (int i = 0; i < 3; i++) // Fills the matrix.
    {
        for (int t = 0; t < 3; t++)
        {
            arr[i][t] = count++;
        }
    }

    for (int i = 0; i < 3; i++) // Prints the matrix.
    {
        for (int t = 0; t < 3; t++)
        {
        printf("%d ", arr[i][t]);
        }
        printf("\n");
    }

}