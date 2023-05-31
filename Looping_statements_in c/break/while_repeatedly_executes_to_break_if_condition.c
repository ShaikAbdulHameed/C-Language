#include<stdio.h>
void main()
{

    while(1)
    {
        int number;
        printf("enter number\n");
        scanf("%d",&number);

        if(number<0){    //no negative number
        break;  //loop breaks if condtion is true.

        printf("%d \n",number);
    }


    }



}
