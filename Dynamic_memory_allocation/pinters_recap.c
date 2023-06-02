#include<stdio.h>

int main()
{
    int a=10;
    int* ptr=&a; //int *ptr=&a; another way initialization
        //printf("it stores the address of a variable. the address of variable is %p",*ptr);//it doesnt prints
        printf("it stores the address of a variable. the address of variable is %d",*ptr);  //output is 10

}

