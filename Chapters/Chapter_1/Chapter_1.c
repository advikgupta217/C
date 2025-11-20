//First program - Hello world

# include<stdio.h>

int main() {
    printf("Hello World \n");

//Variables (Names should be something meaningful)

    
    int number = 20; //20 is stored in number
    char star =  '*'; //* is stored in star
    int age = 22;
    float pi = 3.14;

    int a = 20;
    int A = 20; //Case sensitive

    int _age = 18; //Underscore is valid
    int final_price = 100; //no other symbol other than '_' should be used


//Data types

    int age1 = 22; //here int is the data type(integer)
    float pi2 = 3.14; //here float is data type(decimal)
    char hashtag = '#'; //here char is the data type

//Constants - that don't change(fixed)

//Keywords - We can't give these names to variables

//Program structure
/* #include<stdio.h> (Pre processor director)

int main() {   ? Case sensitive language
    code;
    return 0;
 } */

//Output - printf("Something \n"), \n for new line
    printf("Hello C \n");
    

// For integers - %d
    printf("age is %d \n", age1);
//For real numbers - %f
    printf("Value of pi is %f \n", pi2);
//for characters - %c
    printf("Hashtag looks like this %c \n", hashtag);

//Input - scanf("%d", &age);
    int age2;
    printf("Enter age :");
    scanf("%d", &age2);
    printf("Age is : %d \n", age2);
    

//Code to add 2 numbers from the user 

    int p;
    int q;
    int sum = 0;
    printf("Enter num1 :\n");
    scanf("%d", &p);
    printf("Enter num2 : \n");
    scanf("%d", &q);
    sum = p + q;
    printf("Sum = %d \n", sum);

//(Q) Write a program to calculate the area of a square(Side is given)

    int side;
    printf("Enter side of square : ");
    scanf("%d", &side);
    int area = side * side;
    printf("Area of the square is : %d \n", area);

//(Q) Write a program to calculate the area of a circle(Radius is given)

    float radius;
    printf("Enter radius : ");
    scanf("%f", &radius);
    float area1 = 3.14 * radius * radius;
    printf("Area of the circle is %f \n", area1);

//(Q) Write a program to calculate perimeter of rectangle. Take sides, a and b from the user.

    int length;
    printf("Enter length : ");
    scanf("%d", &length);
    int breadth;
    printf("Enter breadth : ");
    scanf("%d", &breadth);
    int perimeter = 2 * (length + breadth);
    printf("Perimeter is %d", perimeter);

//(Q) Take a number(n) from user & output its cube

    int n;
    printf("Enter number : \n");
    scanf("%d", &n);
    int cube = n*n*n;
    printf("Cube of the given number n is : %d", cube);

//(Q) Take marks of 5 subjects and print total and average

    int m1, m2, m3, m4, m5;
    printf("Enter marks of subject 1 : \n");
    scanf("%d", &m1);
    printf("Enter marks of subject 2 : \n");
    scanf("%d", &m2);
    printf("Enter marks of subject 3 : \n");
    scanf("%d", &m3);
    printf("Enter marks of subject 4 : \n");
    scanf("%d", &m4);
    printf("Enter marks of subject 5 : \n");
    scanf("%d", &m5);
    
    int avg = (m1+ m2 + m3 + m4 + m5) / 5;
    printf("Avg of all subjects are : %d \n", avg);
    return 0;

}