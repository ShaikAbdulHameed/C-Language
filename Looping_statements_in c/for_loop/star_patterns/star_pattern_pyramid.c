

#include<stdio.h>
int main()
{

    int i,j,n,k,m;
    printf("enter number for rows print\n");
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf(" ");
        }

        for(k=1;k<=(2*i)-1;k++)   //k<=(2*i)-1 this condition does not change. 'i' have same value but changes in 'k' values to print '*'
        {
            printf("*");

        }
        m--;
        printf("\n");
    }
}



