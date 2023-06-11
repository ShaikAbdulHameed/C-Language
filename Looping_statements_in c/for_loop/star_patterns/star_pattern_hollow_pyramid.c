

#include<stdio.h>
int main()
{

    int i,j,k,m,n;
    printf("enter no for rows");
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k==1||i==n||k==2*i-1) // here k==(2*i)-1 prints side line, i==n prints bottom line,k==1 prints starting line

                printf("*");
            else
                printf(" ");
       }

        printf("\n");
            m--;
    }
}

