#include<stdio.h>
void main()
{
    int count=1;
    do
    {
        printf("%d \n",count);  //first this executes then after condition.
        count++;
    }while(count>=5);// use this while(count<=5);
}
/* -----syntax of do-while loop-------

   do {

   //body of loop                  // first body of loop will executes then checks the while condition.

   }while (condition);

*/
