

#include<stdio.h>
int main()
{

    int i,j,n,k;

    printf("enter number for rows print\n");
    scanf("%d",&n);

    int space=n-1;
    int star=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(k=1;k<=star;k++)
        {
            printf("*");
        }
        if(space>i)
        {
            space=space-1;
            star=star+2;
        }
        if(space<i)
        {
            space=space+1;
            star=star-2;
        }
        printf("\n");
    }
}


/* -----output-------
enter number for rows print
7
      *
     ***
    *****
   *******
    *****
     ***
      *

*/

