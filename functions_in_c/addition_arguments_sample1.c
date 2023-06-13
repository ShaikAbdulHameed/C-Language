#include<stdio.h>
int main()
{
    add(2,3); //input through arguments
}
add(int a,int b) //here add() without argument can't print main() function
{
    int sum;
    sum=a+b;
    printf("sum=%d",sum);
}

