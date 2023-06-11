#include<stdio.h>
void main()
{
int a=10;
int *p; //int* p;->valid, int *p=&a; -> valid, int* p=&a; -> valid
//*p=&a; //invalid
//p=a;  //invalid
//*p=a; //valid //it will also change the value
p=&a; //valid

printf("pointer prints value is %d\n",*p);
printf("pointer prints address is %d\n",p);

}

