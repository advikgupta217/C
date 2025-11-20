#include<stdio.h>

void printNumbers(int arr[], int n);
int countOdd(int arr[], int n);
void reverse(int arr[], int n);
int storeTable(int arr[][10], int n, int m, int number);


void main(){
//Arrays - Collection of similar data types(int, float, char) stored at contiguous(continous) memory locations
    int marks1 = 98;
    int marks2 = 93;
    int marks3 = 90;

    //or

    int marks[] = {98, 93, 90}; //Array

    //Syntax - int marks[size];, char name[size];, float price[size] - Here marks, name and price are name of arrays in integer, character and float datatype.
    // _ _ _ here first position is always zero
    //Input & Output - scanf("%d", &marks[0]);, printf("%d", marks[0]);

    int mark1[3];
    printf("Enter Physics marks : ");
    scanf("%d", &mark1[0]);

    printf("Enter Chemistry marks :\n ");
    scanf("%d", &mark1[1]);

    printf("Enter Maths marks :\n ");
    scanf("%d", &mark1[2]); //If we enter [3], it will cause runtime error.
    
    printf("Physics = %d, Chemistry = %d, Maths = %d\n", mark1[0], mark1[1], mark1[2]);

    //Write a program to enter price(float) of 3 items & print their final cost with gst(+18% gst)

    float price[3];
    printf("Enter price of item 1 : ");
    scanf("%f", &price[0]);

    printf("Enter price of item 2 : ");
    scanf("%f", &price[1]);

    printf("Enter price of item 3 : ");
    scanf("%f", &price[2]);

    printf("Final price of item 1 = %f\n", (price[0] + (0.18 * (price[0]))));

    printf("Final price of item 2 = %f\n", (price[1] + (0.18 * (price[1]))));

    printf("Final price of item 3 = %f\n", (price[2] + (0.18 * (price[2]))));

//Initialization of Array
/* int marks[] = {a, b, c};
    or
    int marks [3] = {a, b, c};*/

//Pointer Arithmetic - Pointer can be incremented & decremented
/*Case 1 :
int age = 22;
int *ptr = &age;
ptr++  (1 integer aage bdega yaani 4 bytes aage bdega) 
*/
    int age = 22;
    int *ptr = &age;
    printf("ptr = %p\n", ptr);
    ptr++;
    printf("ptr = %p\n", ptr); //Increases 4 bytes
    ptr--;
    printf("ptr = %p\n", ptr); //Decreases 4 bytes

/*Case 2 :
float price = 20.00;
float *ptr = &price; (1 float aage bdega)
ptr++;
*/
    float price_ = 100.00;
    float *ptr1 = &price_;
    printf("ptr = %p\n", ptr1);
    ptr1++;
    printf("ptr = %p\n", ptr1); 
    ptr1--;
    printf("ptr = %p\n", ptr1);   

/*Case 3 :
char star = '**;
char *ptr = &star;
ptr++;
*/
    char star = '*';
    float *ptr2 = &star;
    printf("ptr = %p\n", ptr2);
    ptr2++;
    printf("ptr = %p\n", ptr2); 
    ptr2--;
    printf("ptr = %p\n", ptr2);

//In case of int++ or float++ it is +4 not +1, and in char++ it is +1
// We can also subtract one pointer from another
// We can also compare 2 pointers
    int agez = 18;
    int _agez = 20;
    int *ptrz = &agez;
    int *_ptrz = &_agez;

    printf("%p, %p, Difference = %p\n", ptrz, _ptrz, ptrz - _ptrz);
    _ptrz = &agez; //Store address of agez in _ptrz
    printf("Comparision = %p\n", ptrz == _ptrz); //Returns 1

//Array is a pointer
/* int *ptr = &arr[0]; or
    int *ptr = arr;
     */

//Traverse an Array
    int aadhar[5];

    //Input
    int *ptraadhar = &aadhar[0];
    for(int i = 0; i < 5; i++){
        printf("%d index : ", i);
        scanf("%d", &aadhar[i]);
    }

    //Output
    for(int i = 0; i < 5; i++){
        printf("%d index = %d ", i, aadhar[i]);
    }
    //Arrays as Function argument
    int arru[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arru, 6);    

//Multidimenstional Arrays(2D Array)
    //int arr[][] = {{1,2}, {3,4}};
    //2 x 3 - Marks of 3 subjects of 2 students
    int marksj[2][3]; // _ _ _ | _ _ _
    marksj[0][0] = 90;
    marksj[0][1] = 89;
    marksj[0][2] = 78;
    
    marksj[1][0] = 90;
    marksj[1][1] = 65;
    marksj[1][2] = 97;

    printf("%d", marksj[0][0]);

//Function call to count odd numbers in an array
    int arru1[] = {1,3,4,6,5,7};
    printf("%d", countOdd(arru1, 6));


    int arru2[] = {1,2,3,4,5};
    printf("%d\n", *(arru2+2));
    printf("%d\n", *(arru2+2));


//(Q) Write a function to reverse an array
    reverse(arru1, 6);
    printNumbers(arru1, 6);

//(Q) Create a 2D array, storing the tables 2 & 3.
    int tables[2][10];



}
//Arrays as Function Argument
/*Function Declaration - void printNumbers(int arr[], int n)
    void printNumbers(int *arr, int n)

Function Call - printNumbers(arr, n)
*/

void printNumbers(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

//Write a function to count the number of odd numbers in an array.

int countOdd(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){ //odd
            count++;
        }
    }
    return count;
}

void reverse(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}

int storeTable(int arr[][10], int n, int m, int number){
    for(int i = 0; i < m; i++){
        arr[n][i] = number *(i+1);
    }
}