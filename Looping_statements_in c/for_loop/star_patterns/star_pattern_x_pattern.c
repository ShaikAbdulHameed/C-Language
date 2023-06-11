

#include<stdio.h>
int main()
{

    int i,j,n;
    printf("enter number for rows print\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||j==(n-i)+1)
            printf("*");

        else
            printf(" ");

        }
        printf("\n");
    }
}


/* -----output-------
x pattern
enter number for rows print
11
*         *
 *       *
  *     *
   *   *
    * *
     *
    * *
   *   *
  *     *
 *       *
*         *

*/

