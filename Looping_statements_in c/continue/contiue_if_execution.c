#include<stdio.h>
void main()
{

    for(int i=1;i<=5;i++)
    {
    if(i==3){
    continue;  //it skips the loop execution when if condtion is true.
    }
    printf("%d \n",i);   //here 3 is skipped. due to no execution.


    }



}
