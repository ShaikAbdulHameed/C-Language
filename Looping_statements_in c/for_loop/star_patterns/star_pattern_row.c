#include<stdio.h>
int main()
{
int i,j,n;
printf("enter no for rows");
scanf("%d",&n);
for(i=0;i<n;i++)  //it is for row prints
{
    for(j=0;j<n;j++) //if n is 5 it prints 25 times a 5 row.
    {
        printf("*");
    }
    printf("\n");
}


    }
