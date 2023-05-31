#include<stdio.h>
#include<string.h>
int main()
{

   /* //char str[]="programig";
    char source[]="programig";
    char cpy[strlen(source)]; //the syntax to take for strcpy()
    //char str_length[strlen(str)];
    //printf("%zu",str_length); //not working to print length
    strcpy(cpy,source);   //syntax: strcpy(destination,source);  //it copy from left to right
    //strcpy(cpy[],source[]); //get error
   printf("%s\n",cpy);
    //printf("%s",source);
    strcpy(cpy,"abdul"); //also use like this
    printf("%s\n",cpy); */

    //Another simple method

    char src[]="programig";
    //char des[]; //getting error without index value
    //char des[20];//working
     char des[strlen(src)];
   // strcpy(des[strlen(src)],src); //error
   //strcpy(int des[strlen(src)],src); //error
   strcpy(des,src);
    printf("%s",des);

}

