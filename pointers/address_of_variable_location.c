#include<stdio.h>
int main()
{
    int age=32;  //whether you give value or not it prints same address.
    //printf("%d\n",&age);//output: 6422044 // it is a address of a variable.

    printf("enter your age: ");
     scanf("%d",&age); //it takes input value to this address of variable.
     printf("Age is %d it stores in address %d",age,&age);
}

/* --pointers---
Def: it takes memory address of variable (or) datatype(int,float,char etc.,) location or a address stored of a variable.

ex: int age; //'age' is a variable it stores in datatype of 'int' that have address.
*/
