#include<stdio.h>
#include<string.h>
int main()
{

    char str[]="programig";

    printf("%s\n",str);
    //printf("%c",str[]); //it gives error without giving index
    // printf("%s\n",str[0]); //it doesn't print in output due to %s
     //printf("%c\n",str[0]); //index start with 0 it prints 'p'
    printf("\n Length of string=%zu",strlen(str));  //syntax: strlen(string or array)
   // printf("\n Length of string=%zu",strlen(str[])); //got error
   // printf("\n Length of string=%d",strlen(str)); //also use format specifier %d.
    // printf("\n Length of string=%zu",strlen("abdul")); // also use
    //printf("\n Length of string=%zu",strlen(char)); //not use datatype
    //printf("\n Length of string=%zu",strlen('abdul')); //not in single quotation

}

