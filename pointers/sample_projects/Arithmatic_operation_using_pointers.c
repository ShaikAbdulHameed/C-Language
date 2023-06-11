#include<stdio.h>
void main()
{
    int a=10,b=2;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;

    printf("Adding of a=%d and b=%d is %d\n",*ptr1,*ptr2,*ptr1+*ptr2);
    printf("Subtraction of a=%d and b=%d is %d\n",*ptr1,*ptr2,*ptr1-*ptr2);
    printf("Multiplication of a=%d and b=%d is %d\n",*ptr1,*ptr2,*ptr1 * *ptr2);
    printf("Division of a=%d and b=%d is %d\n",*ptr1,*ptr2,*ptr1/ *ptr2);  //here without out space between / and * it takes as comment /*--*/
}
