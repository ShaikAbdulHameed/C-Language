
#include<stdio.h>
int main()
{
    //revising array number accesing or number printing
    double number[5]={1.1,3.2,5.6,7.6,9.7};

     printf("number\tMemory address\t\tdoubleaddress\n");
     for(int i=0;i<5;i++)
    {

        printf("%.2lf\t%p\t%d\n",number[i],&number[i],&number[i]);  //%p is used to print memory address
    }
}

