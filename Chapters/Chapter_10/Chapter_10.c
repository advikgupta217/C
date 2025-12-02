#include<stdio.h>

void main(){
//File IO - File: container in a storage device to store data
//RAM is volatile, Contents are lost when program terminates. Files are used to persist the data
//Operation on Files - Create, Open, Close, Read and Write.
/*Types of Files
Text Files - textual data : .txt, .c
Binary Files - binary data : .exe, .mp3, .jpg*/

//File Pointer - FILE *fptr;
//File is a hidden structure that needs to be created for opening a file. A file ptr that points to this structure & is used to access the file.
//Opening a File - fptr = fopen("filename", mode(read/write etc ));
//Closing a File - fclose(fptr);
//Modes - "r", "rb", "w", "wb", "a"
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    fclose(fptr);

//Check if a file exists before reading from it
    FILE *fptr1;
    fptr1 = fopen("NewTest.txt", "r");//in case of "w", program automatically creates a file named NewTest.txt 
    if(fptr1 == NULL){
        printf("File doesn't exist\n");
    } else {
        fclose(fptr1);
    }

//Reading from a file - fscanf(fptr, "%c", &ch)
    FILE *fptr;
    fptr = fopen("Test.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fclose(fptr);

//Writing to a file - fprintf(fptr, "%c", ch)
    FILE *fptr2;
    fptr2 = fopen("Test1.txt", "w");
    fprintf(fptr2, "%c", 'M');
    fprintf(fptr2, "%c", 'A');
    fprintf(fptr2, "%c", 'N');
    fprintf(fptr2, "%c", 'G');
    fprintf(fptr2, "%c", 'O');
    fclose(fptr2);

//Read & Write a char - fgetc(fptr), fputc('A', fptr)
    FILE *fptr3;
    fptr3 = fopen("Test2.txt", "r");
    printf("%c\n", fgetc(fptr3));
    printf("%c\n", fgetc(fptr3));
    printf("%c\n", fgetc(fptr3));
    printf("%c\n", fgetc(fptr3));
    printf("%c\n", fgetc(fptr3));
    fclose(fptr3);

    FILE *fptr4;
    fptr3 = fopen("Test3.txt", "w");
    fputc('M', fptr4);
    fputc('A', fptr4);
    fputc('N', fptr4);
    fputc('G', fptr4);
    fputc('O', fptr4);
    fclose(fptr4);

//EOF(End of File) - fgetc returns EOF to show that file has ended(NULL)
    FILE *fptr5;
    fptr5 = fopen("Test4.txt", "r");
    char ch1;
    ch1 = fgetc(fptr5);
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr5);
    }
    printf("\n");
    fclose(fptr5);

//Make a Program to read 5 integers from a file.
    FILE *fptr6;
    fptr6 = fopen("Test5.txt", "r");
    int n;
    fscanf(fptr6, "%d\n", &n);
    printf("Number = %d\n", n);
    fscanf(fptr6, "%d\n", &n);
    printf("Number = %d\n", n);
    fscanf(fptr6, "%d\n", &n);
    printf("Number = %d\n", n);
    fscanf(fptr6, "%d\n", &n);
    printf("Number = %d\n", n);
    fscanf(fptr6, "%d\n", &n);
    printf("Number = %d\n", n);

    fclose(fptr6);

//Write a Program to write allthe odd numbers from 1 to n in a file.
    FILE *fptr7;
    fptr7 = fopen("Odd.txt", "w");

    int n;
    printf("Enter n:");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i % 2 != 0){
            fprintf(fptr7, "%d\t", i);
        }
    }

//Write a Program to read a string from a file & output to the user.
//Replace the data infile of previous question with the number of vowelsin the string.
//Format theinformation of 5 students(name, marks, cgpa, course) in a table like structure in a file.
}