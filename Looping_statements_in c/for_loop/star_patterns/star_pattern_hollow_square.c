#include<stdio.h>
int main()
{

    int i,j,n;
    printf("enter no to Print rows\n");
    scanf("%d",&n);
   for(i=1;i<=n;i++)     //for(i=1;i<n;i++) wrong intialization of i<n. could not get output.
   {
       for(j=1;j<=n;j++){    //for(j=1;j<n;j++) wrong intialization of j<n. could not get output.
   {

       if(i==1||i==n||j==1||j==n)
       {
        printf("*");
       }else{
       printf(" ");
       }
       }
       printf("\n");
   }


}


/*--output---

enter no to Print rows
5
*****
*   *
*   *
*   *
*****
*/