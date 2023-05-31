
#include<stdio.h>
int main()
{
    //revising array number accesing or number printing
    int number[5]={1,3,5,7,9};

     printf("number\tMemory address\n");
     for(int i=0;i<5;i++)
    {

        printf("%d\t%p\n",number[i],&number[i]);  //%p is used to print memory address
        //printf("%d\t%p\n",number[i],number+i);   //also use
    }
    printf("Array memory address of 1: %p\n",number); //it prints first memory address of array.
    printf("Array memory address of 3: %p\n",number+1);
    printf("Array memory address of 5: %p\n",number+2);
    printf("Array memory address of 7: %p\n",number+3);
    printf("Array memory address of 9: %p\n",number+4);

}

/* -----output------
number  Memory address
1       000000000061FE00
3       000000000061FE04
5       000000000061FE08
7       000000000061FE0C
9       000000000061FE10
Array memory address of 1: 000000000061FE00
Array memory address of 3: 000000000061FE04
Array memory address of 5: 000000000061FE08
Array memory address of 7: 000000000061FE0C
Array memory address of 9: 000000000061FE10*/

