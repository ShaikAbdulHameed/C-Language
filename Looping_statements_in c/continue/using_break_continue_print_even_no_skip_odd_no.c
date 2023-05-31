#include<stdio.h>
void main()
{
  // program to print even number and skip odd number and loop exists when entering negative value.
    while(1)
    {
        int number;
        printf("enter number\n");
        scanf("%d",&number);

        if(number<=0){    //no negative number
        break;  //loop breaks if condtion is true.
        }

        if((number % 2)!=0){  //no odd numbers
            continue;   //it skips statement execution. it directly goes to while loop.
        }

        printf("%d \n",number);
    }


    }


