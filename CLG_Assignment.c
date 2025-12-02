#include <stdio.h>
#include <math.h>

void main(){
// Program 1 - Write a C program to get two integers from user and perform all arithmetic operations

int n1, n2;
printf("Program 1\n");
printf("Enter two numbers : \n");
scanf("%d %d", &n1, &n2);
printf("Sum = %d \n", n1 + n2);
printf("Difference = %d \n", n1 - n2);
printf("Multiplication = %d \n", n1 * n2);
printf("Division = %.2f \n", (float)n1 / (float)n2);
printf("\n");

// Program 2 - Write a C program to enter marks of five subjects and calculate total and percentage.

printf("Program 2\n");
int sub1, sub2, sub3, sub4, sub5, total_marks;
printf("Enter marks of subject 1 = \n");
scanf("%d", &sub1);
printf("Enter marks of subject 2 = \n");
scanf("%d", &sub2);
printf("Enter marks of subject 3 = \n");
scanf("%d", &sub3);
printf("Enter marks of subject 4 = \n");
scanf("%d", &sub4);
printf("Enter marks of subject 5 = \n");
scanf("%d", &sub5);

total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
printf("Total marks = %d\n", total_marks);
printf("Percentage = %.2f\n",(((float)total_marks * 100)/500));

// Program 3 - Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

printf("Program 3");
int cels, fahren;
printf("Enter Temperature in Celsius = ");
scanf("%d", &cels);
fahren = (cels + (9.0/5.0))+32 ;
printf("Temperature in Fahrenhrit is = %d Fahrenheit", fahren);
printf("\n");

// Program 4 - Write a C program to represent the working of all compound assignment operators.(+=, -=, *=, /=)

printf("\n");
printf("Program 4\n");
int num1, num2;
printf("Enter a 1st number ");
scanf("%d", &num1);
printf("Enter a 2nd number ");
scanf("%d", &num2);
printf("For += number 2 the value will be %d\n", num1 += num2);
printf("For -= number 2 the value will be %d\n", num1 -= num2);
printf("For *= number 2 the value will be %d\n", num1 *= num2);
printf("For /= number 2 the value will be %d\n", num1 /= num2);
printf("\n");

// Program 5 - Write a C program to check whether the given number is an even or odd number using the if else statement.

printf("Program 5 \n");
int numb;
printf("Enter a number to check Even/Odd = ");
scanf("%d", &numb);
if (numb % 2 == 0){
    printf("The Entered number is Even\n");}
else{
    printf("The Entered number is Odd\n");}
printf("\n");

//Program 6 - Write a C program to handle divide by zero error using if statement.

printf("Program 6 \n");
int x, y;
printf("Enter numerator\n");
scanf("%d", &x);
printf("Enter denominator\n");
scanf("%d", &y);
if (y == 0)
{
    printf("Division by zero is not possible\n");}
else{
    printf("Division = %0.2f\n", (float)x/(float)y);
}
printf("\n");

//Program 7 - Write a C program to input any character and check whether it is alphabet, number or other character using the if else statement.

printf("Program 7 \n");
char c;
printf("Enter a character(Alphabet/ Number/ Special Character)");
scanf("%c", &c);
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    printf("Entered character is an alphabet\n");
}
else if (c >= '0' && c <= '9'){
    printf("Entered character is a number\n");
}
else{
    printf("Entered character is a special character\n");
}
printf("\n");

//Program 8 - Write a C program to input a year from the user and check whether the given year is leap year or not using an Nested if else.

printf("Program 8 \n");
int year;
printf("Enter a year to check for leap = ");
scanf("%d", &year);
if(year % 4 == 0){
    if (year % 100 == 0) {      
            if (year % 400 == 0) { 
                printf("Year is a leap year\n");
            } else {
                printf("Year is not a leap year\n");
            }
        } else {
            printf("Year is a leap year\n");
        }
    } 
    else {
        printf("Year is not a leap year\n");
    }
printf("\n");

//Write a C program to implement a simple calculator using switch-case.

printf("Program 9 \n");
int x1, x2;
char op;
printf("Enter first number = ");
scanf("%d", &x1);
printf("Enter second number = ");
scanf("%d", &x2);
printf("Enter a operator(+, -, *, /) = ");
scanf("%c", &op);
switch (op){
    case '+' : printf("Sum = %d", x1 + x2);
        break;
    case '-' : printf("Difference = %d", x1 - x2);
        break;
    case '*' : printf("Multiplication = %d", x1 * x2);
        break;
    case '/' : printf("Division = %.2f", (float)(x1)/(float)(x2));
        break;
    default : printf("Not a valid operator");
}
printf("\n");

//Write a C program to enter any number and calculate its factorial.

printf("Program 10 \n");
int num9, fact = 1;
printf("Enter number to calculate factorial");
scanf("%d", &num9);
for (int i = num9; i >= 1; i--){
    fact = fact * i;
}
printf("Factorial of %d is %d", num9, fact);
printf("\n");

//Write a C program to enter any number and print its reverse.

printf("Program 11 \n");
int num10, rev = 0, remx;
printf("Enter any number: ");
scanf("%d", &num10);

while (num10 != 0)
{
    remx = num10 % 10;
    rev = rev * 10 + remx;
    num10 = num10/10;
}

printf("Reversed number = %d\n", rev);
printf("%n");

//Write a C program to enter any number is Prime number or not.

printf("Program 12 \n");
int num, i, isPrime = 1;

printf("Enter any number: ");
scanf("%d", &num);

if (num <= 1) {
    isPrime = 0;   // 0 and 1 are not prime
} 
else {
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
            }
        }
    }

if (isPrime)
    printf("%d is a Prime number.\n", num);
else
    printf("%d is NOT a Prime number.\n", num);

    printf("\n");


//Write a C program to check whether a number is an armstrong number or not.

int num, originalNum, remainder, result = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder; // cube of digit
        num /= 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is NOT an Armstrong number.\n", originalNum);


//

int num, i, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is NOT a Perfect number.\n", num);


//(15)Write a C program to print Fibonacci series up to n terms.
    int n, i;
    int a = 0, b = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");

    for(int i = 1; i <= n; i++){
        printf("%d", a);
        next = a + b;
        a = b;
        b = next;
    }

//(16)Write a C program to print the following pattern.
    int rows = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

//(17)Write a C program to print the following pattern:

    int rows1 = 5;
    for (int i = 0; i < rows1; i++){
        for (int j = 0; j < 2*(rows1-i) - 1 ; j++){
            printf(" ");
        }
        for (int k = 0; k < 2*i+1 ; k++){
            printf("*");
        }
        printf("\n");
    }
    
//(18)Write a C program to find maximum and minimum element in an array

    int n9,i;
    printf("Enter number of Elements");
    scanf("%d", &n9);
    int arr[n9];

    printf("Enter %d elements: \n", n9);
    for (int i = 0; i < n9; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n9; i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

//(19)Write a C program to linear search an element in an array.

    int n10, i, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n10);
    int arr1[n10];

    printf("Enter %d elements: \n", n10);
    for (int i = 0; i < n10; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number to search");
    scanf("%d", &key);

    for (int i = 0; i < n10; i++){
        if (arr[i] == key){
            printf("Element %d found at position %d\n", key, i+1);
            found = 1;
            break;
        }
    }
    if (!found){
        printf("Element %d not found\n", key);
    }
    

//(20) Write a C program to sort an array of elements in ascending order.

    int n11, i, j1, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n11);
    int arr2[n11];

    printf("Enter %d elements: \n", n11);
    for (int i = 0; i < n11; i++){
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n11 - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr2[j] > arr2[ j + 1]){
                temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order: \n");
    for (int i = 0; i < n11; i++){
        printf("%d", arr2[i]);
    }


//(21) Write a C program to search(Binary search) an element in an array

    int n12, i, key1, low, high, mid;
    printf("Enter number of elements");
    scanf("%d", &n12);

    int arr3[n12];

    printf("Enter %d sorted elements(ascending): \n", n12);
    for(int i = 0; i < n12; i++){
        scanf("%d", &arr3[i]);
    }
    printf("Enter the elements to search: ");
    scanf("%d", &key1);

    low = 0;
    high = n12 - 1;

    while(low <= high){
        mid = (low + high)/2;
        if(arr3[mid] == key1){
            printf("Element %d found at position %d\n",key, mid+1);
        }
        else if(arr3[mid] < key1){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("Element %d not found in the array \n", key1);


//(22)Write a C program to add/subtract two matrices.
# include<stdio.h>

void main(){
    int a[10][10], b[10][10], sum[10][10];
    int r, c;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Input first matrix
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    printf("\nMatrix Addition (A + B):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}


//(23) Write a C program for matrix multiplication
#include<stdio.h>

void main(){
    int r1, c1, r2, c2;

    // Input size of matrices
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication validity
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int A[10][10], B[10][10], result[10][10];

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    printf("Resultant Matrix (A x B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

//(24) Write a C program to find the sum, square and cube of any number using function.

#include <stdio.h>

// Function to find sum of two numbers
int sum(int a, int b) {
    return a + b;
}

// Function to find square of a number
int square(int n) {
    return n * n;
}

// Function to find cube of a number
int cube(int n) {
    return n * n * n;
}

int main() {
    int num1, num2, n;

    // Input two numbers to find sum
    printf("Enter two numbers to find their sum:\n");
    scanf("%d %d", &num1, &num2);

    // Input one number for square and cube
    printf("Enter a number to find its square and cube:\n");
    scanf("%d", &n);

    // Display results
    printf("\nSum of %d and %d = %d\n", num1, num2, sum(num1, num2));
    printf("Square of %d = %d\n", n, square(n));
    printf("Cube of %d = %d\n", n, cube(n));

    return 0;
}
