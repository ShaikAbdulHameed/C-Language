#include<stdio.h>
void main()
{
    int a=10,b=20,temp;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("Before swapping the values a=%d and b=%d\n",*ptr1,*ptr2);
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("After swapping the values a=%d and b=%d",*ptr1,*ptr2);
}
