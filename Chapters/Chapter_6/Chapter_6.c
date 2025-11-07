#include<stdio.h>

void square(int n);
void _square(int* n);
void swap(int a, int b);
void _swap(int *a, int *b);
void doWork(int a, int b, int *sum, int *prod, int *avg);

void main(){
//Pointers - Variable that stores the memory address of another variable(Syntax - int *ptr_variable_name = &age;)
// * - Value at address operator, & - Address of operator
//int _age = *ptr_varialble_name
    int age = 18;
    int *ptr = &age; //(Stores address of variable age in the pointer variable named ptr)
    int _age = *ptr; // (Stores value at address of ptr = 18 in the new variable named _age) 
    printf("%d", _age);

//Declaring pointers - int *ptr(For integer type variable), char *ptr(For character type variable) and float *ptr(For float type variable)

//Format specifier - %p(Pointer address)
/*  printf("%p", &age); - Gives address of variable named age
    printf("%p", ptr);
    printf("%p", &ptr); - Gives address of pointer named ptr */

    //Address
    printf("%p\n", &age);
    printf("%u\n", &age); //For non hexadecimal value of address
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

/*  Consider variable age = 18 
    int *ptr = &age;
    printf("%d", age); - Prints 18
    printf("%d", *ptr); - Prints 18
    printf("%d", *(&age)); - Prints 18 **/
    
    //Value
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

/* Practice Question - Find Output
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0; --> **Important line**
    
    printf("x = %d\n", x);
    printf( " *ptr = %d\n", *ptr);
    
    *ptr += 5; --> **Important line**
    printf("x = %d\n", x);
    printf( " *ptr = %d\n", *ptr);

    (*ptr)++; --> Imortant line**
    printf("x = %d\n", x);
    printf( " *ptr = %d\n", *ptr);
    
    *ptr is equal to x ??*/

//Pointer to Pointer - Variable that stores the memory address of another pointer(Syntax - int **pptr, char **pptr, float**pptr)

    float price = 100.00;
    float *ptr1 = &price; //Stores address of float variable named price in the pointer variable named ptr
    float **pptr = &ptr1; //Stores address of pointer variable named ptr in the pointer variable named pptr

//(Q) Print the value of 'i' from its pointer to pointer
    int i = 5;
    int *ptr2 = &i;
    int **pptr1 = &ptr2;

    printf("%d\n", **pptr1);

//Pointers in Function Call
    int number = 4;
    square(number);
    printf("Number = %d\n", number);

    _square(&number);
    printf("Number = %d\n", number);

//(Q) Swap 2 numbers, a & b.
    int x = 2, y = 4;
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);

//(Q) Write a function to calculate the sum, product & average of 2 numbers. Print the average in the main function
    int a = 3, b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);

    printf("Sum = %d, Prod = %d, Avg = %d\n", sum, prod, avg);
}

//Call by value - When we pass value of variable as argument(Creates a copy of variable)
void square(int n){
    n = n * n;
    printf("Square = %d\n", n);
}

//Call by reference - When we pass address of variable as argument
void _square(int* n){
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}

//Call by value
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n", a, b);
}

//Call by reference
void _swap(int *a, int *b){
    int _t = *a;
    *a = *b;
    *b = _t;
}

//Will the address output be same?
/*
void printAddress(int n);

int main(){
    int n = 4;
    
    printf("%p\n", &n);
    printAddress(n);
    return 0;
    }

void printAddress(int n){ //Call by Value function
    printf("%p\n", &n);}
*/

void doWork(int a , int b, int *sum, int *prod, int *avg){
    int sum = a + b;
    int prod = a + b;
    int avg = (a+b)/2;
}