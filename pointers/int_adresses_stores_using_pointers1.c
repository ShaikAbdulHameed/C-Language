#include<stdio.h>
int main()
{
    int age=32,age1=35,age2=38;
    int *p,*p1,*p2;
    p=&age;
    p1=&age1;
    p2=&age2;
     printf("Age\taddress\n"); // here \t is tabs size
     printf("---\t-------\n");
     printf("%d\t%d\n",*p,p);
     printf("%d\t%d\n",*p1,p1);
     printf("%d\t%d\n",*p2,p2);

}
