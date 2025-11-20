#include<stdio.h>
#include<math.h>

void main(){
//Loop Control Instructions - To repeat some parts of the program
//Types - For, While, Do While
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n"); //Code to print Hello World 5 times
 //for(initialisation; condition; updation) {do something}  
    for(int i = 1; i <= 5; i = i + 1){ //i++ or i+= are also same
        printf("Hello World\n"); //Code to print Hellow World 5 times using Loop Control Intruction.
        printf("%d \n", i); //here i is known as iterator/counter
    }
    //increment operator
    //++i(pre increment)
    //i++(post increment)

//(Q) Write a Program to print the numbers from 0 to 10
    for(int k = 0; k <= 10; k = k + 1){
        printf("%d \n", k);
    }
 //For a floating iterator
    for(float l = 1.0; l <= 5.0; l++){
        printf("%.2f \n", l);
    }

 //while(condition-true) {do something + updation}
    int i1 = 1;
    while (i1 <= 5){
        printf("Hello \n");
        i1 += 1;
    }

//(Q) Write a program to print the numbers from 0 to n, if n is given by the user
    int n, z = 0;
    printf("Enter your number = ");
    scanf("%d", &n);
    while (z <= n){
        printf("%d\n", z);
        z += 1;
    }

    //with for loop
    //for(int z; z<=n; z++){
    //    printf("%d\n", z);
    //}

 //do while loop - do{//do something}  while(condition);
    int k = 5;
    do {
        printf("%d\n", k);
        k -= 1;
    } while (k>=1);
    
//(Q) Print the sum of first n natural numbers given by user
    int num, sum = 0;
    printf("Enter your number =\n");
    scanf("%d", &num);
    for (int s = 1; s <= num; s++){
        sum = sum + s;
    }
    
    printf("Sum is %d\n", sum);

    //To print in reverse
    for(int s = num; s >= 1; s--){
        printf("%d\n", s);
    }
    
//(Q) Print the table of a number input by the user.
    int num1, mult;
    printf("Enter your number for table =\n");
    scanf("%d", &num1);
    for(int j = 1; j <= 10; j++){
        mult = num1 * j;
        printf("%d\n", mult);
    }

//break statement - exit the loop
    for(int h=1; h<=5; h++){
        if(k == 3){
            break;
        }
        printf("%d\n", h);
    }

    printf("End");

//(Q) Keep taking numbers as input from the user until user enters an odd number.
    int num2;
    do
    {
        printf("Please enter your number =");
        scanf("%d", &num2);
        printf("%d\n", num2);
    } while (num2 % 2 == 0);
    printf("You entered an Odd number") ;   

//(Q) Keep taking numbers as input from user until user enters a number which is multiple of 7.
    int num3;
    do
    {
        printf("Please enter the number =");
        scanf("%d", &num3);
        printf("%d\n", num3);
    } while (num3 % 7 != 0);
    printf("You entered multiple of 7");

//continue statement - skip to next iteration
    for(int g = 1; g <= 5; g++){
        if(g == 3){ //skips 3
            continue;
        }
        printf("%d \n", g);
    }

//(Q) Print all numbers from 1 to 10 except for 6.
    for(int f = 1; f <= 10; f++){
        if (f == 6)
        {
            continue;
        }
        printf("%d \n", f);
    }

//(Q) Print all the odd numbers from 5 to 50.
    for(int d = 5; d <= 50; d += 2){
        printf("%d\n", d);
    }

//(Q) Print the factorial of a number n.
    int number;
    printf("Enter a number for factorial =");
    scanf("%d", &number);
    if (number == 0)
    {
        printf("0 factorial is equal to 1");
    }
    else if (number < 0)
    {
        printf("No factorial for negative number");
    }
    else{
        int fact = 1;
        for(int p = number; p >= 1; p -= 1){
            fact *= p;
        }
        printf("Factorial of %d = %d\n", number, fact);
    }

//(Q) Print reverse of the table for a number n.
    int num4, mult1;
    printf("Enter your number for table =\n");
    scanf("%d", &num4);
    for(int y = 10; y >= 1; y--){
        mult1 = num4 * y;
        printf("%d\n", mult1);
    }

//(Q) Calculate the sum of all numbers between 5 and 50(including 5 and 50)
    int sum1 = 0;
    for(int q = 5; q <= 50; q += 1){
        sum1 += q;
    }
    printf("Sum = %d\n", sum1);
}