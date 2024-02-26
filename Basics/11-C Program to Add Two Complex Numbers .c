//C Program to Add Two Complex Numbers 
//Honestly, this isn't basic at all but whatever.
#include <stdio.h>

void imaginary(char[],int[], int); //Declaring the functions that is used later on
int strlength(char[]);

int main(){

    char comp1[40]; //Creates strings so the user can write the complex number
    char comp2[40];
    int sum1[2] = {0,1}; //These arrays hold the real and imaginery values, they are set this way to be used in the future
    int sum2[2] = {0,1};


    printf("Please enter the first complex number(example: 5+4i): "); //Gets the imaginery numbers
    scanf("%s", comp1);
    printf("Please enter the second complex number(example: 5+4i): ");
    scanf("%s", comp2);    


 
    imaginary(comp1,sum1, strlength(comp1)); //Sends the imaginery number, the array that integers will be stored and string length
    imaginary(comp2,sum2, strlength(comp2));



    printf("The sum of %s and %s is: %d+%di", comp1, comp2, sum1[0]+sum2[0],sum1[1]+sum2[1]);//final printinh
}

int strlength(char a[]){ //Calculates the string length. 

    int i;
    for ( i = 0; i < 41; i++)
    {
        if (a[i] == '\0') //It counts until it ecnounters null.
        {
            break;
        }        
    }
    
    return i;

}

void imaginary(char c1[], int sum[], int a){

    int i; //The counter is declated outside because it needs to continue after the real part is done.
    if (c1[0] == '-')//Checks if the real part is negative or positive.
    {
        sum[0] = -1*(c1[1]-48);//The same thing written below but it multiplies it with -1 since its negative
        i = 1;
    }
    else{
        sum[0] = c1[0] -48;//By substracting -48 from the character, it gets the correct integer value from the ASCII table.
        i = 0;
    }
    
    for (i; i < a; i++)
    {
        if (c1[i+1] == '+' || c1[i+1] == '-')//Counts until the next character is "+" or "-". If so, breaks the loop.
        {
            break;
        }
        else
        {
            if (sum[0] > 0)//Calculates the integer part accordingly if the number is more than one digit
            {
                sum[0] = sum[0]*10 + (c1[i+1]-48);
            }
            else
            {
                sum[0] = sum[0]*10 - (c1[i+1]-48);
            }           
        }        
    }

    i=i+2; //Updates the counter accordingly
    if (c1[i-1] == '-')//The rest of the function is same as above but it calculates the imaginery part this time.
    {
        sum[1] = -1*(c1[i]-48);
    }
    else{
        sum[1] = c1[i]-48;
    } 


    for (i; i < a; i++)
    {
         if (c1[i+1] == 'i')
        {
            break;
        }
        else
        {
            if (sum[1] > 0)
            {
                sum[1] = sum[1]*10 + (c1[i+1]-48);
            }
            else
            {
                sum[1] = sum[1]*10 - (c1[i+1]-48);
            }            
        }        
    }
        
    printf("%d %d \n", sum[0], sum[1]);//Prints the values. Although this isn't necessary, I added it to check the values.

}