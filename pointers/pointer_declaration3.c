#include<stdio.h>
void main()
{
    int a=10;
//   int a=10;
    int *p;
   // *p=&a;  //invalid
   *p=a;
    //*p=10;  //it doesnt take directly a value.
    printf("%d\n",*p);
    printf("%d\n",a);
}
