#include<stdio.h>
int main()
{

    int i,j,n,k;
    printf("enter no to Print rows\n");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
         printf(" ");
        }
       for(k=1;k<=n;k++)
       {
           if(i==1||i==n||k==1||k==n){
         printf("*");
           }

        else{
            printf(" ");
        }
       }
    printf("\n");
   }
}

/*---output----
enter no to Print rows
5
 *****
  *   *
   *   *
    *   *
     *****
     */
