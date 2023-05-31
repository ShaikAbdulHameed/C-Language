#include<stdio.h>
int main()
{
    //revising array number accesing or number printing
    char alph[5]={'a','b','c','d','e'};

     printf("alphabets\tMemory address\t\tcharaddress\n");
     for(int i=0;i<5;i++)
    {

        printf("%c\t\t%p\t%d\n",alph[i],&alph[i],&alph[i]);  //%p is used to print memory address
    }
}

