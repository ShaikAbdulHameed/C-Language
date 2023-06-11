

#include<stdio.h>
int main()
{

    int i,j,n,k;
    printf("enter number for rows print\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }

        for(k=1;k<=n;k++)
        {
            if(i==1||i==n||k==1||k==n||k==i||k==(n-i)+1)
            {
               printf("*");
            }else{
            printf(" ");
            }

        }


        printf("\n");
    }
}



