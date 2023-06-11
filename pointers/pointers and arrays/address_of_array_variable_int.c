
#include<stdio.h>
int main()
{
    //revising array number accesing or number printing
    int number[5]={10,20,30,40,50};
    printf("Printing the values of array\n");
    printf("%d\n",number[0]);
    printf("%d\n",number[1]);
    printf("%d\n",number[2]);
    printf("%d\n",number[3]);
    printf("%d\n",number[4]);
printf("Printing the address of array\n");
    printf("%d\n",&number[0]);
    printf("%d\n",&number[1]);
    printf("%d\n",&number[2]);
    printf("%d\n",&number[3]);
    printf("%d\n",&number[4]);
    /* ---the output of array--
Printing the values of array
10
20
30
40
50
Printing the address of array
6422016
6422020  //difference is 4 due integer takes 4 bytes
6422024
6422028
6422032 */
}

