#include<stdio.h>

void main()
{
int a=10,b=2,result,i=20,j=30,k=40,l=50;
result=a+b;
printf("Addition of %d and %d is = %d \n",a,b,result);
result=a-b;
printf("subtraction of %d and %d is = %d \n",a,b,result);
result=a*b;
printf("Multiplication of %d and %d is = %d \n",a,b,result);
result=a/b;
printf("Division of %d and %d is = %d \n",a,b,result);
result=a%b;
printf("Remainder of %d and %d is = %d \n\n\n",a,b,result);

//--------increment/decrement--------
printf("Before increment i value is %d \n",i);  //i=20
result=i++;                                     //nothing change in output. it will used in loops.
printf("postIncrement of i is = %d \n",result);

printf("Before increment j value is %d \n",j); //j=30
result=++j;                                      //nothing change in output.it will used in loops.
printf("PreIncrement of j is = %d \n",result);

printf("Before decrement k value is %d \n",k);//k=40
result=k--;
printf("postDecrement of k is = %d \n",result);

printf("Before decrement l value is %d \n",l); //l=50
result=--l;
printf("preDecrement of l is = %d \n",result);

}


/* --- Operators ---
Arithematic operators:
---------------------
Addition        +
subtraction     -
Multiplication  *
Division        /
Remainder       %
increment       ++ (preincrement/postincrement)
decrement       -- (predecrement/postdecrement)

*/
