

#include<stdio.h>
int main()
{

    int i,j,n,k,m;
    printf("enter number for rows print\n");
    scanf("%d",&n);
    m=n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<m;j++)
        {
            printf(" ");
        }

        for(k=1;k<=(2*i)-1;k++)   //k<=(2*i)-1 this condition does not change. 'i' have same value but changes in 'k' values to print '*'
        {
            if(k==1||k==(2*i)-1||i==n)
            printf("*");
          else
            printf(" ");
        }
        m++;
        printf("\n");
    }
}



