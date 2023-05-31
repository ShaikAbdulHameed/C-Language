#include<stdio.h>
int main()
{
    int age=32;

   /*  -----pointer declaration ----*/

      int *ptr=&age; //same
    //int* ptr=&age; //working
    //int ptr=&age; //without * getting error
    printf("%d",*ptr);

}

/* --pointers---
Def: it takes memory address of variable (or) datatype(int,float,char etc.,) location or a address stored of a variable.

ex: int age; //'age' is a variable it stores in datatype of 'int' that have address.
*/
