#include<stdio.h>
int main()
{

    int i,j,n;
    printf("enter no to Print rows\n");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
           if(i==1||i==n||j==1||j==n||i==j)
           {
                printf("*");
           }
        else{
            printf(" ");
        }
        }

    printf("\n");
   }
}
/*--- output---
enter no to Print rows
8
*
**
* *
*  *
*   *
*    *
*     *
********
*/




