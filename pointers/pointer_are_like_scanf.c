#include<stdio.h>
int main()
{
    //---pointer is works like scanf -----

    int a;
    printf("Enter a value\n");
    scanf("%d",&a); // using pointer to read address and value int *p=&a;
    printf("Value of a is %d\n",a); //printf("Value of a is %d\n",*p); //it prints the value
    printf("Address of a is %d\n",&a); //printf("address of a is %d\n",p); //it prints the Address

    /*-----using pointer----------
    int a=10;
    int *p=&a;
    printf("Value of a is %d\n",*p);
    printf("Address of a is %d\n",p);
    */
     /*---output---
     Value of a is 10
     Address of a is 6422036*/


}
