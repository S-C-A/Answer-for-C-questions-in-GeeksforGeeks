    //C Program to Find All Factors of Number
    #include <stdio.h>

    int factor(int, int);

    int main(){
    
        int x;  //Created variable
        printf("Please enter a number: ");
        scanf("%d",&x); //Received the variable from the user

        factor(x,1);

    }

    int factor(int x, int divisor){ //Used a recrusive function instead of a for loop to spice up the solution

        if (divisor == x+1)
        {
            return 0;
        }
        if (x%divisor == 0)
        {
            printf("%d is a factor of %d\n", divisor,x);            
        }           
        return factor(x,divisor+1);


    }