#include<stdio.h>
void main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("Variable address is %d\n",ptr);
    printf("pointer value is %d\n",*ptr);
    *ptr=20;
    printf("changed pointer value is %d\n",*ptr);
}
