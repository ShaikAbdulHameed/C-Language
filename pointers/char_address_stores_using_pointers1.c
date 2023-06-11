#include<stdio.h>
int main()
{
    char age='A',age1='B',age2='C';
    double *p,*p1,*p2;
    p=&age;
    p1=&age1;
    p2=&age2;
     printf("Age\t address\n"); // here \t is tabs size
     printf("---\t -------\n");
     printf("%c\t %d\n",*p,p);
     printf("%c\t %d\n",*p1,p1); //&age always take in integer type %d for address store
     printf("%c\t %d\n",*p2,p2);

}



