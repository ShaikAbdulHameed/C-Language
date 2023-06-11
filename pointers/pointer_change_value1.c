#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("Before changing the value is %d\n",a);
    *ptr=20;
    printf("After changing the value is %d",a);
}
