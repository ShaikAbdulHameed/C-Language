#include<stdio.h>
int main()
{
    float age=32,age1=35,age2=38;
     printf("Age\taddress\n"); // here \t is tabs size
     printf("%.2f\t %d\n",age,&age);
     printf("%.2f\t %d\n",age1,&age1); //&age always take in integer type %d for address store
     printf("%.2f\t %d\n",age2,&age2);
     printf("size of float = %d bytes",sizeof(float));
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
