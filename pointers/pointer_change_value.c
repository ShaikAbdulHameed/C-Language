#include<stdio.h>
int main()
{
    int age=32;

   /*  -----pointer declaration ----*/

      int *ptr=&age; //same
    //int* ptr=&age; //working
    //int ptr=&age; //without * getting error
    //printf("Before unchange age=%d \n",*ptr); //also use this
    printf("Before unchange age=%d \n",age);


    *ptr=35; //changing a value
   // printf("After changing an age=%d\n",*ptr); //also use this
    printf("After changing an age=%d",age);

}

/* --pointers---
Def: it takes memory address of variable (or) datatype(int,float,char etc.,) location or a address stored of a variable.

ex: int age; //'age' is a variable it stores in datatype of 'int' that have address.
*/
