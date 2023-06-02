#include<stdio.h>

int main()
{
FILE *fptr;
fptr=fopen("text.txt","r");
if(fptr!=NULL)
{
    printf("File open successful");
}
else{
    printf("File open unsuccessful");
}
}

/* ---file Handling-----
3 types
We use file pointer
syntax: FILE *fptr; //FILE* fptr; another way initialization
1)Open a file ex: fptr=fopen("test.txt","r"); //r-read,w-write,
2)Perform file operation
3)Close the file

*/
