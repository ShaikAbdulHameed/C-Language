#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2st number");
    scanf("%d",&b);

        goto add;


    add:
        temp=a+b;
        printf("the sum of two numbers are %d",temp);
}
