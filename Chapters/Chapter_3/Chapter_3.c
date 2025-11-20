#include<stdio.h>
#include<math.h>

void main(){
//Conditional Statements(If-Else and Switch)
 //if(Condition){ do something if TRUE}
 //else{ do something if FALSE}
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if(age > 18){
        printf("Adult \n");
        printf("Can Vote \n");
        printf("Can Drive \n");
    }
    else{
        printf("Not Adult \n");
    }
    //No need for {} for single command
 //else if -  do something if 1st is FALSE & 2nd is TRUE (if -> else if -> else if..-> else)
    int age1;
    printf("Enter age1 : ");
    scanf("%d", &age1);

    if (age1 >= 18){
        printf("Adult \n");
    }
    else if (age > 13 && age < 18){
        printf("Teenager \n");
    }
    else{
        printf("Child \n");
    }
    
//Conditional Operators
 //Ternary Operator(Condition ? do something if TRUE : do something if FALSE);
    age >= 18 ? printf("Adult \n") : printf("Not Adult \n"); 
 //Switch(Cases) - switch(number){case C1: break; default}
    int day; //1 - monday, 2 - tuesday...
    printf("Enter day(1-7) : ");
    scanf("%d", &day);
    switch (day){
        case 1 : printf("Monday \n");
            break;
        case 2 : printf("Tuesday \n");
            break;
        case 3 : printf("Wednesday \n");
            break;
        case 4 : printf("Thursday \n");
            break;
        case 5 : printf("Friday \n");
            break;
        case 6 : printf("Saturday \n");
            break;
        case 7 : printf("Sunday \n");
            break;
        default : printf("Not a valid day. \n"); //Here default works same as else statement in conditional statements.
        //Cases can be in any order
        //Nested switch(switch inside switch) are allowed
    }
 //Nested if statements
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num >= 0){
        printf("Postive \n");
        if (num % 2 == 0){
            printf("Even positive number \n");
        }
        else{
            printf("Odd positive number \n");
        }

    }
    else{
        printf("Negative \n");
    }

//(Q) Write a program to check if a student passed or failed.
//Marks > 30(PASS) otherwise marks <= 30(FAIL)
    int marks;
    printf("Enter your marks out of 100 = ");
    scanf("%d", &marks);
    if (marks > 30 && marks <= 100){
        printf("PASS \n");
    }
    else if (marks <= 30){
        printf("FAIL \n");
    }
    else {
        printf("HACKER \n");
    }

 // marks <= 30 ? printf("FAIL \n") : printf("PASS \n");
//(Q) Write a program to give grades to a student 
// Marks < 30 is C, 30 <= Marks < 70 is B, 70 <= Marks < 90 is A and 90 <= Marks <= 100 is A+ 
    int marks1;
    printf("Enter marks for Grade ");
    scanf("%d", &marks1);
    if (marks1 >= 0 && marks1 < 30){
        printf("Your grade is C \n");
    }
    else if (marks1 >= 30 && marks1 < 70){
        printf("Your grade is B \n");
    }
    else if (marks1 >= 70 && marks1 < 90){
        printf("Your grade is A \n");
    }
    else if (marks1 >= 90 && marks1 <= 100){
        printf("Your grade is A+ \n");
    }
    else {
        printf("HACKER \n");
    }

//What will be the output of this code?
    int x = 2;
    if(x = 1){
        printf("x is equal to 1 \n");
    }
    else {
        printf("x is not equal to 1 \n");
    }

//Write a program to find if a characer entered by a user is upper case or not.
    char ch;
    printf("Enter you character : \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("Upper Case \n");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Lower Case \n");
    }
    else{
        printf("Not a valid character \n");
    }
}
