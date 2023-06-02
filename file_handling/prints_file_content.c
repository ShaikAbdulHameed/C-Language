#include<stdio.h>

int main()
{
FILE *fptr;
fptr=fopen("text.txt","r");
char content[1000]; //content is an array
if(fptr!=NULL)
{
   // fgets(content,1000,fptr);  //content of array reads first line the file pointer.
   while(fgets(content,1000,fptr)){  //this loop is used to print all lines of content
   printf("%s",content); //it prints the content
   }

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
