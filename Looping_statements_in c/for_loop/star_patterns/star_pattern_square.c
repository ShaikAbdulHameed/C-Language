#include<stdio.h>
int main()
{

    int i,j,n;
    printf("enter no to Print rows\n");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++){
       printf("*");
       }
       printf("\n");
   }


}


/*--output---

enter no to Print rows
4
****
****
****
****
*/
