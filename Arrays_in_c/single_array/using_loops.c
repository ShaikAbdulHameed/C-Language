#include<stdio.h>
int main()
{
    // Using For loop to an array
    int age[5],i;

    for(i=0;i<5;++i)     //for(int i=0;i<5;++i)
    {
        scanf("%d",&age[i]);
     }
    for(i=0;i<5;++i)   //for(int i=0;i<5;++i)
    {
        printf("%d ",age[i]);
        }

     /* for(int j=0;j<5;++j)  Another way
    {
        printf("%d ",age[j]);
        }*/

}



/* ----instead of taking input and to print using 'loop to an array' in above example----
    printf("Enter 5 input values \n");
    scanf("%d",&age[0]);
    scanf("%d",&age[1]);           //receiving input from user
    scanf("%d",&age[2]);
    scanf("%d",&age[3]);
    scanf("%d",&age[4]);

    printf("\n%d\n",age[0]);
    printf("%d\n",age[1]);
    printf("%d\n",age[2]);
    printf("%d\n",age[3]);
    printf("%d\n",age[4]);
*/







