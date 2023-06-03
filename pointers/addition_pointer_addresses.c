#include<stdio.h>
void main()
{
    int *add,num1=100,num2=50;   //int *add,*num1=100,*num2=50; donot initialize
    *add=num1+num2;                //*add=*num1+*num2; dont initialize
    printf("Addition  is %d\n",*add);
    printf("Addition  is %p\n",*add);
    printf("Addition  is %d\n",add);
    printf("Addition  is %d\n",&add);
    printf("Addition  is %p\n",&add);
    printf("\n");
    printf("Addition  is %d\n",*add+1);
    printf("Addition  is %p\n",*add+1);
    printf("Addition  is %d\n",add+1);
    printf("Addition  is %d\n",&add+1);
    printf("Addition  is %p\n",&add+1);



}
