//C Program for Quadratic Equation Roots
#include <stdio.h>
#include <math.h>

void constant(char[], int[]);

int main(){

    char polinomial[20] = {0};
    int constants[3] = {0};
    int D, a, b, c;    
    printf("Please enter your polinomial equation without space inbetween(exmple: +4x*x+5x+7): ");
    scanf("%s", polinomial);

    constant(polinomial,constants);

    a = 2;
    b = 6;
    c = -20;
    printf("%d %d %d", a, b, c);
    D = (pow(b,2)) - (4*a*c);


    if (D > 0) {
        printf("There are two real roots!\n");
        printf("The first root is: %.2f\n", (-b + sqrt(D)) / (2.0 * a));
        printf("The second root is: %.2f\n", (-b - sqrt(D)) / (2.0 * a));
    } else if (D == 0) {
        printf("There is one real root!\n");
        printf("The root is: %.2f\n", (float)-b / (2.0 * a));
    } else if (D < 0) {
        printf("There are no real roots!\n");
    }
    
}

void constant(char polinomial[], int constants[]){

    int positive = 0;
    int temp = 0;
    int counter = 0;

    for (int i = 0; i <= 20; i++)
    {
        if (positive == 0)
        {
            if (polinomial[i] == '-')
            {
                positive = -1;
            }
            else 
            {
                positive = 1;
            }
            continue;            
        }
        else if ((polinomial[i] == 'x' && (polinomial[i+1] == '+' || polinomial[i+1] == '-')) || polinomial[i] == '\0')
        {
            constants[counter] = positive*temp;
            counter++;
            positive = 0;
            temp = 0;
            continue;
        }
        if (polinomial[i] == 'x' || polinomial[i] == '*')
        {
            continue;
        }
        temp = 10*temp + polinomial[i] - 48;        
        if (polinomial[i] == '\0')
        {
            break;
        }        
    }
}

