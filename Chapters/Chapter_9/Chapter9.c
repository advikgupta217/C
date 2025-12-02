#include<stdio.h>
#include<string.h>

    //Structures - a collection of values of different data types(int, char, float) - It is a type of user defined datatype
    //Array is a collection of same data types
    /* Example : To store information of a student:
    name(string), roll no(integer) & cgpa(float) */
    /*
    struct student{
    char name[100]
    int roll;
    float cgpa
    };
    struct student s1;
    s1.cgpa = 10.5;  */

struct student{
    int roll;
    float cgpa;
    char name[100];
};

typedef struct ComputerEngineeringStudent{
    int rollno;
    float marks;
    char codename[100];    
} cse ;

struct address{ 
    int houseNo;
    int block;
    char city[100];
    char state[100];
} ;

void printInfo(struct student s1);
void printAdd(struct address add);

struct vector {
    int x;
    int y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);

struct complex{
    int real;
    int img;
};

void main(){
    struct student s1;
    s1.roll = 5;
    s1.cgpa = 10.5;
    //s1.name = "ADE"; - Incorrect as string is defined from array notation and it cannot be changed but can be copied.
    strcpy(s1.name, "ADE");

    printf("Student name = %s", s1.name);
    printf("Student roll no. = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);

//Structures in Memory - Stored in contigous memory location

//(Q) Write a Program to store data of 3 students
    struct student s2;
    s2.roll = 6;
    s2.cgpa = 9.5;
    strcpy(s1.name, "BDE");
    printf("Student name = %s", s2.name);
    printf("Student roll no. = %d\n", s2.roll);
    printf("Student cgpa = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 7;
    s3.cgpa = 9.0;
    strcpy(s3.name, "CDE");
    printf("Student name = %s", s3.name);
    printf("Student roll no. = %d\n", s3.roll);
    printf("Student cgpa = %f\n", s3.cgpa);


/* Benefits of Structures : 
Saves us from creating too many variables.
Good data management and organization.

Array of Structures
struct student ECE[100]; Information of 100 students to be stored
struct student COE[100];
struct student IT[100];
ECE[0] is a structure which has it's own name, roll no and cgpa. */

    struct student ece[100];
    ece[0].roll = 100;
    ece[0].cgpa = 9.5;
    strcpy(ece[0].name, "ADE1");

    printf("Name %s\n", ece[0].name);
    printf("Roll no. = %d \n", ece[0].roll);
    printf("Cgpa = %f\n", ece[0].cgpa);

//Initializing structures - struct student s1 = {"ADE", 10, 9.8}

    struct student s4 = {5, 10.5, "ADE"};
    printf("Student roll = %d\n", s4.roll);

//Pointers to Structures
    
    struct student *ptr = &s4;
    printf("Student roll = %d\n", (*ptr).roll); //not *(ptr).roll

//Arrow operator
//(*ptr).code <--> ptr->code
    printf("student.roll with ptr = %d\n", (*ptr).roll);
    printf("student->roll = %d\n", ptr->roll);
    printf("student->name = %s\n", ptr->name);
    printf("student->cgpa = %f\n", ptr->cgpa);

//Passing structure to function
//Function Prototype
    printInfo(s4);

//typedef Keyword - To create an alias(Nicknames) for data types

    cse s6;
    s6.rollno = 5;
    s6.marks = 10.5;
    strcpy(s6.codename, "ADE");
    printf("Student name is %s\n", s6.codename);

//(Q) Enter address (house no., block, city, state) of 5 people

    struct address adds[5]; //Array of Structures
    //input
    printf("Enter info for person 1: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printf("Enter info for person 2: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printf("Enter info for person 3: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printf("Enter info for person 4: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printf("Enter info for person 5: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

//Create a Structure to store vectors. Then make a function to return sum of 2 vectors.

    struct vector v1 = {5, 10};
    struct vector v2 = {4, 6};
    struct vector sum = {0, 0};
    
    calcSum(v1, v2, sum);

//Create a structure to store complex numbers.(Use arrow operator)
    struct complex number1 = {4,7};
    struct complex *ptr3 = &number1;
    printf("Imaginary part = %d", ptr3->img);
    printf("Real part = %d", ptr3->real);


}

void printInfo(struct student s1){
    printf("Student information:\n");
    printf("student roll no. = %d\n", s1.roll);
    printf("student name = %s\n", s1.name);
    printf("student cgpa = %f\n", s1.cgpa);
}

void printAdd(struct address add){
    printf("Address is : %d, %d, %s, %s", add.houseNo, add.block, add.city, add.state);
}

void calcSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is %d", sum.x);
    printf("Sum of y is %d", sum.y);
}
