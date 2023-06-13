
#include<stdio.h>

int main()
{
FILE *fptr;
fptr=fopen("newfile.txt","w");  //file created and write
if(fptr!=NULL)
{
fputs("I love c programming\n",fptr); ////printf("hai this is abdul ahmeed",fptr); //not use to write file
fputs("c programming is best in programiz",fptr);

}

fclose(fptr);
}
