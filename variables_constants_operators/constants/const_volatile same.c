
#include<stdio.h>

int main(void){
/*const int a=10;
int *ptr=&a;
printf("%d\n",a);
*ptr=100;                  //default volatile
printf("%d",a);*/

volatile const int a=1000;
int *ptr=(int*) &a;
printf("%d\n",a);           //not working
*ptr=100;
printf("%d",a);
}
