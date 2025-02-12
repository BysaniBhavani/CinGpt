

// C Program to illustrate file opening
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    // file pointer variable to store the value returned by
    // fopen
    FILE* fptr;
 
    // opening the file in read mode
    //fptr = fopen("filename.txt", "r");
    fptr = fopen("filename.txt", "w");
 
    // checking if the file is opened successfully
    if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "now exit.");
        exit(0);
    }
     else {
        printf("The file is created Successfully.");
    }
    fptr = fopen("filename.txt", "r");
    char buf[100];
    fscanf(fptr, "%s %s %s %d",buf );
    char c = fgetc(fptr);

    char s[20]="Hello\0Hi";
    printf("%s",s);
    printf("%d %d",strlen(s),sizeof(s));
 
    return 0;
}