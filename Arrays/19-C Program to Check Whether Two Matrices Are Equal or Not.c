#include <stdio.h> 

int areSame(int A[][4], int B[][4]) 
{ 
    int i, j; 
    for (i = 0; i < 4; i++) 
        for (j = 0; j < 4; j++) 
            if (A[i][j] != B[i][j]) 
                return 0; 
    return 1; 
} 
  

int main() 
{ 
  

    int A[4][4] = { { 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 } }; 
  
    int B[4][4] = { { 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 }, 
                    { 1, 2, 3, 4 } }; 
  
 
    printf("\n First Matrix \n"); 
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            printf(" %d", A[i][j]); 
        } 
        printf("\n"); 
    } 
  
    printf("\n Second Matrix \n"); 
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            printf(" %d", B[i][j]); 
        } 
        printf("\n"); 
    } 
  
    if (areSame(A, B)) 
        printf("\n Matrices are equal"); 
    else
        printf("\n Matrices are not equal"); 
    return 0; 
}