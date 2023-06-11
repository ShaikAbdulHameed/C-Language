#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    printf("%d\n",&a);
    printf("%d\n",*p); //*p stores the value
    printf("%d\n",p);  //p is same as &a. it means it points to Address of a.
    //printf("%p\n",p);

}
