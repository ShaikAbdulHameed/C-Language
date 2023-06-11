#include<stdio.h>
int main()
{
    int age=32,age1=33,age2=34;
    printf("%p\n",&age);//%p represents to 'Display a pointer'.
    printf("%p\n",&age1);
    printf("%p\n",&age2);



   /*  -----pointer declaration ----*/

   // int *ptr=&age; //same
    int* ptr=&age;
   // int ptr=&age; //same
    printf("%p",ptr); //it prints the address of age

}

/* --pointers---
Def: it takes memory address of variable (or) datatype(int,float,char etc.,) location or a address stored of a variable.

ex: int age; //'age' is a variable it stores in datatype of 'int' that have address.
*/
