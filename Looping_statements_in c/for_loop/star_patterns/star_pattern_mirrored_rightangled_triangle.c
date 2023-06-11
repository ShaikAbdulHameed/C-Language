#include<stdio.h>
int main()
{

    int i,j,n,k,m=1;
    printf("enter no to Print rows\n");
    scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
       for(j=1;j<=i;j++)
       {
           printf(" ");

        }
        for(k=1;k<=m;k++)
        {
            printf("*");
        }

    printf("\n");
    m++;
   }
}

/*--output--
enter no to Print rows
5
     *
    **
   ***
  ****
 *****
*/
