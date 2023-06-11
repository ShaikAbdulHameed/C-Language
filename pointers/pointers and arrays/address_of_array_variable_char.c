
#include<stdio.h>
int main()
{
    //revising array number accesing or number printing
    char alpha[5]={'A','B','C','D','E'};
    printf("Printing the alphabets of array\n");
    printf("%c\n",alpha[0]);
    printf("%c\n",alpha[1]);
    printf("%c\n",alpha[2]);
    printf("%c\n",alpha[3]);
    printf("%c\n",alpha[4]);
printf("Printing the address of array\n");
    printf("%d\n",&alpha[0]);
    printf("%d\n",&alpha[1]);
    printf("%d\n",&alpha[2]);
    printf("%d\n",&alpha[3]);
    printf("%d\n",&alpha[4]);
    /* ---the output of array--
Printing the alphabets of array
A
B
C
D
E
Printing the address of array
6422043
6422044 //it takes 1 for char 1 byte
6422045
6422046
6422047*/
}

