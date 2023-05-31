
#include<stdio.h>

int main(){
typedef int quantity; //typedef int quantity,rate;
typedef float rate;
int total;

quantity q=20,q1=30,q2=40; //quantity q=20,q1=30,q2=40;
rate r=10;

total=q*r;
printf("%d\n",q);
printf("%.2f\n",r);
printf("%d",total);
return 0;
}
