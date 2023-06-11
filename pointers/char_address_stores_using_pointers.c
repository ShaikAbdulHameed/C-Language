
#include<stdio.h>
int main()
{
    char age='A',age1='B',age2='C';
    char *p=&age,*p1=&age1,*p2=&age2;
     printf("Age\taddress\n"); // here \t is tabs size
     printf("%c\t %d\n",*p,p);
     printf("%c\t %d\n",*p1,p1); //&age always take in integer type %d for address store
     printf("%c\t %d\n",*p2,p2);

}
