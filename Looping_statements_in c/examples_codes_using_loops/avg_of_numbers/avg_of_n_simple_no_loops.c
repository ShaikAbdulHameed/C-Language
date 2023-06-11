#include<stdio.h>

int main()
{
    //int n; //not getting correct output
    float n,avg;
  printf("enter natural number ");
  scanf("%f",&n);
  printf("\nentered natural number is %.2f",n);
  avg=(n+1)/2;
  printf("\nThe sum of the series of  N numbers is %.2lf",avg);
  return 0;
}
