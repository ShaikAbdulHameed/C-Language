
#include<stdio.h>
int main()
{
    //revising array number accesing or number printing
    float number[5]={1.1,3.2,5.6,7.6,9.7};

     printf("number\tMemory address\t\tfloataddress\n");
     for(int i=0;i<5;i++)
    {

        printf("%.2f\t%p\t%d\n",number[i],&number[i],&number[i]);  //%p is used to print memory address
    }
}

