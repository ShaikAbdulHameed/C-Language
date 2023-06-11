
#include<stdio.h>
int main()
{
    //revising array number accesing or number printing
    int number[5]={1,3,5,7,9};

     printf("number\tMemory address\n");
     for(int i=0;i<5;i++)
    {

        printf("%d\t%p\n",number[i],&number[i]);  //%p is used to print memory address
    }
    printf("Array memory address : %p",number); //it prints first memory address of array.
}

/* -----output------
number  Memory address
1       000000000061FE00
3       000000000061FE04
5       000000000061FE08
7       000000000061FE0C
9       000000000061FE10
Array memory address : 000000000061FE00 */

