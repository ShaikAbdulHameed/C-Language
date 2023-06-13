#include<stdio.h>
add(int a,int b); //function prototype
int main()
{
    add(2,3); //function parameters
}
add(int a,int b) //here add() without argument can't print main() function
{
    int sum;
    sum=a+b;
    printf("sum=%d",sum);
}
