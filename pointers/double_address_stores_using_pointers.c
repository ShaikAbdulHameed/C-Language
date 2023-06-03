#include<stdio.h>
int main()
{
    double age=32,age1=35,age2=38;
    double *p=&age,*p1=&age1,*p2=&age2;
     printf("Age\taddress\n"); // here \t is tabs size
     printf("%.2lf\t%d\n",*p,p);
     printf("%.2lf\t%d\n",*p1,p1);
     printf("%.2lf\t%d\n",*p2,p2);

}
