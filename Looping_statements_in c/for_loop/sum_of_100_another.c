#include<stdio.h>
void main()
{
    int sum=0;
    for(int i=2;i<=100;i=i+2)   //i given i+2 but not getting output.
    {
        sum=sum+i;    //sum of 100 (2+4+6+.......100)=2550

    }
    printf("%d",sum);
}
/* -----syntax of for loop-------

   for(initializationExpression;testExpression;updateExpression)
   {

   }

*/
