#include<stdio.h>
//#define N 10
main()
{
    //Avg. of n values

    float n,avg;
    printf("enter n value\n");
    scanf("%f",&n);
    for(int i=n;n>0;n--)
    {
        avg=(n+1)/2;
        printf("Average of %.2f is %.2f \n",n,avg);
    }




}
/* 1+2+3+4+-----+n=(n+1)/2
    enter n value
    1.enter n value is 1
    avg=(1+1)/2=1
    2.enter n value is 2
    avg=(2+1)/2=1.5
    3.enter n value is 3
    avg=(3+1)/2=2
    4.enter n value is 4
    avg=(4+1)/2=2.5

     (or)

    1.enter n value is 4
     (1+2+3+4)/4=2.5

    2.enter n value is 10
     (1+2+3+4+5+6+7+8+9+10)/10=5.5

     */
