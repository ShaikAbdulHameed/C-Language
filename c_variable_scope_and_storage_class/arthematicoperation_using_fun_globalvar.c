#include<stdio.h>
int a=12,b=3;
add(a,b);
sub(a,b);
mul(a,b);
div(a,b);
void main()
{
    //int x=15,y=5;
//int ad=add(12,3);
int ad=add(a,b);
int su=sub(a,b);
int mu=mul(a,b);
int di=div(a,b);
//printf("The addition of %d and %d is %d",x,y,ad);
printf("The addition of %d and %d is %d\n",a,b,ad);
printf("The subtraction of %d and %d is %d\n",a,b,su);
printf("The multiplication of %d and %d is %d\n",a,b,mu);
printf("The division of %d and %d is %d\n",a,b,di);
}
add(a,b)
{
    int addition=a+b;
    return addition;
}
sub(a,b)
{
    int substraction=a-b;
    return substraction;
}
mul(a,b)
{
   int multiplication=a*b;
    return multiplication;
}
div(a,b)
{
    int division=a/b;
    return division;
}
