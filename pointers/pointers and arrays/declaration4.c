#include<stdio.h>
int main()
{
    int a[5]; //or a[5]={1,2,3,4,5};
    *(a+0)=1;   //here 0,1,2,3,4 are indexes
    *(a+1)=2;
    *(a+2)=3;      //initialized these values
    *(a+3)=4;
    *(a+4)=15;
    printf("%d\n",*a+0);  //it just like printf("%d\n",a[0]);
    printf("%d\n",*a+1);
    printf("%d\n",*a+2);
    printf("%d\n",*a+3);
    printf("%d\n",*a+4);
}
