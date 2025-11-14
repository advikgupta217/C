#include<cs50.h>
#include<stdio.h>

void meow(void); //Defining a function
void woof(int n);
int add(int a, int b);
int main(){

//Program 1
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);

//Program 2 - compare.c
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y){
        printf("x is less than y\n");
    }

    else if (x > y){
        printf("x is greater than y\n");
    }
    else (x == y){
        printf("x is equal to y\n");
    }

//Program 3 - agree.c
    c = get_char("Do you agree? ");

    if (c == 'y')//Single quotation*
    {
        printf("Agreed.\n");
    }
    else if (c == 'Y') //Just use OR
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')//Single quotation*
    {
        printf("Not agreed.\n");
    }
    else if (c == 'N') //Just use OR
    {
        printf("Not agreed.\n");
    }

//Program 4 - meow.c
    int i = 0;
    while (i < 3){
        printf("Meow!\n");
        i++;
    }

    for (int j = 0; j < 3; j++){
        printf("Meow!\n");
    }

//Functions
    void meow(void)
    {
        printf("meow\n")
    }

    for (int k = 0; k < 3; k++){
        meow();
    }

    woof(10);

//Calculator.c
    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = add(x, y);
    printf("%i\n", z);

//Mario
    printf("????\n"); //Question mark block
    for(int i = 0; i < 4; i++){
        printf("?");
    }
    printf("\n");

    //For 2D blocks
    printf("###\n");
    printf("###\n");
    printf("###\n");

    //or
    for(int i = 0; i < 3; i++){
        printf("###\n");
    }

    int n = 3;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n"); 
    }

    *do while loop 
    do
    {
        n = get_int("Size: ");
    }
}
    //void meow(int n) - To take input how many times we have to print "meow".
void woof(int n){
    {
    for(l = 0; l < n; l++);
        printf("Woof!\n");
    }  
}

int add(int a, int b)
{}
    return a + b;