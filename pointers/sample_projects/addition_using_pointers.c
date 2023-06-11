#include<stdio.h>
void main()
{
    int a=10,b=20,add;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;

    add=*ptr1+*ptr2;

    printf("Adding of a=%d and b=%d is %d",*ptr1,*ptr2,add);
}
