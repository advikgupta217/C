#include <stdio.h>

void printHelloWorld(int count);
int sum(int n);
int fact(int f);
float convertTemp(float celsius);
float percentage(int p, int m, int s);
int fibonacci(int m);

void main(){
//Recursion(When a function calls itself, it's called recursion)
//(Q) Print "Hello World" 5 times.
    printHelloWorld(5);

//(Q) Sum of first n natural numbers.
    printf("sum is : %d\n", sum(5));

//(Q) Factorial of n.
    printf("factorial is : %d\n", fact(5));

//Anything that can be done with iteration, can be done with recursion and vice-versa.
//Recursion can sometimes give the most simple solution.
//Base Case is the condition which stops recursion.
//Iteration has infinite loop & Recursion has stack overflow

//(Q) Write a function to convert celsius to fahrenheit.
    float far = convertTemp(10);
    printf("far = %f", far);

//(Q) Write a function to calculate percentage of a student from Marks in Science, Math and Sanskrit.
    float percenta = percentage(90,80,30);
    printf("Percentage = %f\n", percenta);

//(Q) Write a funciton to print n terms of the fibonacci sequence.{0, 1, 1, 2, 3, 5, 8, 13...}
    printf("%d", fibonacci(5));
}

//Recursive function
void printHelloWorld(int count){
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    printHelloWorld(count-1); //Recursion
}

int sum(int n){
    if (n==1)
    {
        return 1;
    }
    
    int SumOfNMinusOne = sum(n-1);
    int sumN = SumOfNMinusOne + n;
    return sumN;
}

int fact(int f){
    if (f == 0){
        return 1;
    }
    int factNm1 = fact(f-1);
    int factN = factNm1 * f;
    return factN;
}

float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}

float percentage(int p, int m, int s){
    float percent = ((p + m + s)/300.0)*100 ;
    return percent;
}

int fibonacci(int m){
        if(m == 0){
            return 0;
        }
        if(m == 1){
            return 1;
        }
    int fibonacciNm1 = fibonacci(m-1);
    int fibonacciNm2 = fibonacci(m-2);
    int fibonacciN = fibonacciNm1 + fibonacciNm2;
    //printf("Fibonacci of %d is : %d", m, fibonacciN);
    return fibonacciN;
}
