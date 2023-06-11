#include<stdio.h>
int main()
{
    //revising array number accesing or number printing
    double number[5]={10.5,20.6,30.4,40.6,50.9};
    printf("Printing the values of array\n");
    printf("%.2lf\n",number[0]);
    printf("%.2lf\n",number[1]);
    printf("%.2lf\n",number[2]);
    printf("%.2lf\n",number[3]);
    printf("%.2lf\n",number[4]);
printf("Printing the address of array\n");
    printf("%d\n",&number[0]);
    printf("%d\n",&number[1]);
    printf("%d\n",&number[2]);
    printf("%d\n",&number[3]);
    printf("%d\n",&number[4]);
    /* ---the output of array--
Printing the values of array
10.50
20.60
30.40
40.60
50.90
Printing the address of array
6422000
6422008
6422016 //difference is 8 due to double have 8 bytes.
6422024
6422032
*/
}

