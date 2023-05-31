#include<stdio.h>
void main()
{
    int number,count,result;
    printf("enter number to view multiplication table\n");
    scanf("%d",&number);
    count=1;
    while(count<=10)
    {
        result=number*count;
        printf("%d * %d = %d \n",number,count,result);
        count++;
    }
}
/* -----syntax of while loop-------

   while (condition)       //if condition is true '1' it will executes the statement else it terminates the loop.
   {
       //statement inside
   }
*/
