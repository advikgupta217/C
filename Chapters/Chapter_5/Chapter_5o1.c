#include<stdio.h>
#include<math.h>
//Declaration/Prototype
void PrintHello();
void GoodBye();
void Namaste();
void Bonjour();
int sum(int a, int b);
void printTable(int n);
void calculatePrice(float value); //Add 18% GST to old price
void power();
int squareArea(int side);
float circleArea(float r);
int rectangleArea(int len, int bred);

void main(){
//Functions - block of code that performs particular task
//Increases code reusability (Only return one value at a time)
//void printHello(); {printf("Hello");} - Here printHello is name of the function
    PrintHello(); //Function Call
    PrintHello();
    GoodBye();
    printf("Enter your Nationality, I(Indian) or F(French)?");
    char ch;
    scanf("%c", &ch);
    if (ch == 'I' || ch == 'i'){
        Namaste();
    }
    else if (ch == 'F' || ch == 'f') {
        Bonjour();
    }
    //Execution always starts from main
    //Function gets called directly or indirectly from main
    //Library function and User defined function

//Passing Arguments - Functions can take value and give some value
    //void printHello();  void printTable(int n);  void sum(int a, int b);
    int a, b;
    printf("Enter first number : "); 
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("Sum is : %d", s);

    int n;
    printf("\nEnter n :"); 
    scanf("%d", &n);
    printTable(n); //argument or actual parameter

    float value = 100.0;
    calculatePrice(value);
    printf("Value is : %f\n", value);

//Argument v/s Parameter 
/*Argument - Values that are passed in function call
Used to send value, actual parameter*/
/*Values in function declaration & definition 
Used to receive value, formal parameters*/

    printf("%d\n", squareArea(2));
    printf("%f\n", circleArea(1.4));
    printf("%d\n", rectangleArea(2,4));
}

//Function Definition
void PrintHello() {
    printf("Hello\n");}

//(Q) Write 2 functions - one to print "Hello" & second to print "Good bye"

void GoodBye() {
    printf("GoodBye\n");
}

//(Q) Write a function that prints Namaste if user is Indian & Bonjour if the user is French

void Namaste() {
    printf("Namaste\n");
}

void Bonjour() {
    printf("Bonjour\n");
}

int sum(int x, int y){
    return x + y;
}

void printTable(int n){ //Parameter or Formal Parameter
    for(int i = 1; i <= 10 ; i+=1){
        printf("%d\n", n*i);
    }
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("Final price is = %f", value);
}

//(Q) Use Library Function to  calculate the square of a number given by user.
void power(){
    int x;
    printf("Enter the number for square\n");
    scanf("%d", &x);
    printf("Square of x is = %d", pow(x,2));
}

//(Q) Write functions to calculate area of square, a circle & a rectangle.
//Square
int squareArea(int side){
    return side * side;
}
//Circle
float circleArea(float r){
    return 3.14 * r * r;
}
//Rectangle
int rectangleArea(int len, int bred){
    return len * bred;
}






