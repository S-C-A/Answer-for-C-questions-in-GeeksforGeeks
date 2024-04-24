#include <stdio.h>

void equal(int[][2], int[][2]);

int main(){

    int arr1[2][2], arr2[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
     
    equal(arr1,arr2);
}

void equal(int arr1[][2], int arr2[][2]){

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                printf("The matricies aren't equal");
                return;
            }
            
        }
    }
    printf("matricies are equal");
    return;
}