#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    //int *ptr=&a;
    int *ptr;
    ptr=&a;
    printf("enter your name :");
    fgets(a,100,stdin);
     printf("entered name is : %s",ptr);
}
