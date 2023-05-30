#include<stdio.h>

void main()
{
int a=10; double div=10.00;
printf("Addition is = %d \n",a+2);
printf("subtraction is = %d \n",a-2);
printf("Multiplication is = %d \n",a*2);
printf("Division is = %.2lf \n",div/2);  //only use double or float.
printf("Remainder is = %d \n\n\n",a%2);  //Also called modulus operator. not to use double and float it gets error.

int b=5,c=5,d=5,e=5;
printf("postincrement is = %d \n",b++);   // increments +1, decrements -1 on result.
printf("preincrement is = %d \n",++c);
printf("postdecrement is = %d \n",d--);
printf("predecrement is = %d \n",--e);


}


/* --- Operators ---
Arithematic operators:
---------------------
Addition        +
subtraction   -
Multiplication *
Division       /
Remainder       %
increment      ++
decrement      --

*/
