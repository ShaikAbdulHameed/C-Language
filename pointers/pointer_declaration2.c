
#include<stdio.h>
int main()
{
    int number;
    int* ptr;
    ptr=number;//invalid
    *ptr=&number//invalid
    ptr=&number;//valid
    *ptr=number;//valid
}

/* --pointers---
Def: it takes memory address of variable (or) datatype(int,float,char etc.,) location or a address stored of a variable.

ex: int age; //'age' is a variable it stores in datatype of 'int' that have address.
*/

