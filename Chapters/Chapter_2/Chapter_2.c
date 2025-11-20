#include<stdio.h>
#include<math.h>

void main(){
//Intructions : Type Declaration Instructions(Declare car before using it)
    int a = 4;
    int b = a; //This will not cause an error as we have declared variable before declaring variable 'b'.
    int c = b - 1; //valid
    int d = 1, e; //valid

    /* int a, b, c;
    a = b = c = 5; //valid */

    int oldAge = 19;
    int years = 2;
    int newAge = oldAge + years; //Variables should be used before using it(In this case years)

/*Arithmetic Intructions : (Single variable on the LHS - Operands and Operators)*/
    int p = 1, q = 4;
    int sum = p + q;
    int multiply = p * q;
// Arithmetic Operators - +, -, *, /, %
    /*Invalid : b + c = a
            a = bc
            a = b^c*/
    int power = pow(p,q);
    printf("%d", power);
    //Modular Operator % - Return remainder for int
    printf("%d", 14%10);
    //This operator only works on integer
    /*3 % 2 = 1
    -3 % 2 = -1*/

//Type conversion
/* int op int - int
int op float - float
float op float - float*/
    printf("%f \n", 2.0 * 2);
    printf("%d \n", 2/3); //This will show output as zero
    printf("%f \n", 2/3); //This will print exact answer

//Solve : int a = 1.99999;
    int x = 1.999999;
    printf("%d \n", x); //This will print 1 not 2

//Arithmetic Intructions - Operator Precedence
    // *, /, %  ->  +,-  ->  =(assignment operator)
    //x = 4 + 9 * 10 = 94
    //Associativity(For same precedence - Left to Right)
    //x = 4 * 3 / 6 * 2 
    int k = 4 * 3 / 6 * 2; //Left to Right
    printf("%d k = \n", k);
    int a1 = 5 * (2 / 2) * 3; //Bracket se shurwat kre
    printf("%d a1 = \n", a1);

//Instructions - Control Instructions(To determine flow of the program)
//Sequence Control, Decision Control, Loop Control, Case Control

//Relational Operators (==, >, >=, <, <=, !=)
    printf("%d \n", 4 == 4); //returns 1(True)
    printf("%d \n", 4 == 3); //returns 0(False)
    printf("%d \n", 4 > 3); //returns 1(True)
    printf("%d \n", 4 < 3); //returns 0(False)
    printf("%d \n", 3 > 3); //returns 0(False)
    printf("%d \n", 3 >= 3); //returns 1(True)
    printf("%d \n", 4 != 4 ); //returns 0(False)

//Logical Operators (&&, ||, !)
    printf("%d \n", 3 > 4 && 5 > 2); //returns 0(False)
    printf("%d \n", 3 > 4 || 5 > 2); //returns 1(True)

//Assignment Operators (=, +=, -=, *=, /=, %=)
    int y = 4;
    int z = 2;
    y += z; //y = y + z
    printf("%d \n", y);
    y -= z; //y = y - z
    printf("%d \n", y);
    y *= z; //y = y * z
    printf("%d, \n", y);

//Write a program to check if a number is divisible by 2 or not.
    int num;
    printf("Enter your number = ");
    scanf("%d", &num);
    num % 2 == 0 ? printf("Number is divisible by 2") : printf("Number is not divisible by 2");

//Write a program to check if a number is odd or even.
    int num1;
    printf("Enter your number = ");
    scanf("%d", &num1);
    num1 % 2 == 0 ? printf("Number is Even") : printf("Number is Odd");
}