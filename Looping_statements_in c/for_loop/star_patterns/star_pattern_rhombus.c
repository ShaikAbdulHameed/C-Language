#include<stdio.h>
int main()
{

    int i,j,n,k;
    printf("enter no to Print rows\n");
    scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
       for(j=1;j<=i;j++)
       {
         printf(" ");
        }
       for(k=1;k<=n;k++)
       {
         printf("*");
        }
    printf("\n");
   }
}
/*---output---

enter no to Print rows
5
     *****
    *****
   *****
  *****
 *****
*/




