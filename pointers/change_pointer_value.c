#include<stdio.h>
void main()
{
    int a=10,b=20;
    int *ptr;
    ptr=&a;
    printf("Variable address is %d\n",ptr);
    printf("pointer value is %d\n",*ptr);
    *ptr=b;
    printf("changed pointer value is %d\n",*ptr);
}

