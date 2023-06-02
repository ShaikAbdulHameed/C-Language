#include<stdio.h>

int main()
{
FILE *fptr;
fptr=fopen("newfile.txt","w");  //file created and write
fputs("I love c programming\n",fptr);
fputs("c programming is best in programiz",fptr);
fclose(fptr);
}


/* ---file Handling-----
3 types
We use file pointer
syntax: FILE *fptr; //FILE* fptr; another way initialization
1)Open a file ex: fptr=fopen("test.txt","r"); //r-read,w-write,
2)Perform file operation ex: fptr=fopen("newfile.txt","w");
3)Close the file ex: fclose(fptr);

*/
