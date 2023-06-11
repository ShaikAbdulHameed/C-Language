#include<stdio.h>
int main()
{
    char age='A',age1='B',age2='C';
     printf("Age\taddress\n"); // here \t is tabs size
     printf("%c\t %d\n",age,&age);
     printf("%c\t %d\n",age1,&age1); //&age always take in integer type %d for address store
     printf("%c\t %d\n",age2,&age2);
     printf("size of char = %d bytes",sizeof(char));
     /* output is below
      Age     address
       A      6422047 // it take 1 bytes space on store
       B      6422046
       C      6422045 */


}

/* --pointers---
Def: it takes memory address of variable (or) datatype(int,float,char etc.,) location or a address stored of a variable.

ex: int age; //'age' is a variable it stores in datatype of 'int' that have address.
*/
