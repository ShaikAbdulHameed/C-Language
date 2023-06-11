#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};; //or a[5]={1,2,3,4,5};
   /* *a+0=1;   //here 0,1,2,3,4 are indexes
    *a+1=2;
    *a+2=1;      //not working to asssign arry getting errors
    *a+3=1;
    *a+4=1; */
    printf("%d\n",*a+0);
    printf("%d\n",*a+1);
    printf("%d\n",*a+2);
    printf("%d\n",*a+3);
    printf("%d\n",*a+4);
}
