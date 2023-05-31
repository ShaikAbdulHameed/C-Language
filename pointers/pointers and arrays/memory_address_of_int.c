
#include<stdio.h>
int main()
{
    //revising array number accesing or number printing
    int number[5]={1,3,5,7,9};

     printf("number\tMemory address\t\tintegeraddress\n");
     for(int i=0;i<5;i++)
    {

        printf("%d\t%p\t%d\n",number[i],&number[i],&number[i]);  //%p is used to print memory address
    }
}

