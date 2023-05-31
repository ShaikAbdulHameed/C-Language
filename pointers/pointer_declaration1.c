#include<stdio.h>
int main()
{
    int age=32;
    int* ptr=&age;  //regular use like this int* ptr= &age equals to scanf("%d",&age); it means it takes the value.
    //int *ptr=&age;    // int* ptr=&age and int *ptr=&age are same but we get little bit confusion
    printf("%d",*ptr); //it prints the value

}
