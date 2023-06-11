#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};; //or a[5]={1,2,3,4,5};
    *(a+0)=6;   //here 0,1,2,3,4 are indexes
    *(a+1)=7;
    *(a+2)=8;      //changing values
    *(a+3)=9;
    *(a+4)=10;
    printf("%d\n",*a+0);
    printf("%d\n",*a+1);
    printf("%d\n",*a+2);
    printf("%d\n",*a+3);
    printf("%d\n",*a+4);
}
