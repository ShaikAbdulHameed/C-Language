#include<stdio.h>
int main()
{
    int age=32,age1=35,age2=38;  //whether you give value or not it prints same address.
    //printf("%d\n",&age);//output: 6422044 // it is a address of a variable.

  /* printf("enter your age");
     scanf("%d",&age); //it takes input value to this address of variable.
     printf("Age is %d it stores in address %d",age,&age) */
     printf("Age\taddress\n"); // here \t is tabs size
     printf("%d\t%d\n",age,&age);
     printf("%d\t%d\n",age1,&age1);
     printf("%d\t%d\n",age2,&age2);
     printf("size of int = %d bytes",sizeof(int));
     /* output is below
     Age     address
       32      6422044 // it take 4 bytes space on store
       35      6422040
       38      6422036 */


}

/* --pointers---
Def: it takes memory address of variable (or) datatype(int,float,char etc.,) location or a address stored of a variable.

ex: int age; //'age' is a variable it stores in datatype of 'int' that have address.
*/
