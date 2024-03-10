//C Program to Print Continuous Character Pattern

void pattern(int,int,int);

int main(){

    int x;
    printf("Please enter a number: ");
    scanf("%d",&x);

    pattern(x,1,65);
}

void pattern(int size, int counter, int letter){

    if (counter > size)
    {
        return;
    }
    if (counter <= size)
    {
        for (int i = 0; i < counter; i++)
        {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
    pattern(size,counter+1,letter);
}