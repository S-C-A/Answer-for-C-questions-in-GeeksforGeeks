int primee(int, int);

int main(){

    int str,fin;
    printf("Please enter the starting point: ");
    scanf("%d", &str);
    printf("Please enter the finish point: ");
    scanf("%d", &fin);
    
    for (int i = str>1 ? str : 2 ; i <= fin; i++)
    {
        if (primee(i,2) == 1)
        {
            printf("%d\n", i);
        }   
    }
}

int primee(int number, int  counter){

    if (number == counter)
    {
        return 1;
    }
    else if (number > counter)
    {
        if (number%counter == 0)
        {
            return 0;
        }
        primee(number,++counter);
    }
}