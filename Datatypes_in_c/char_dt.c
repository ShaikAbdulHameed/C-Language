#include<stdio.h>
void main()
{
    char character='a';  // char is the internally it is integer type. it will print character to a number.
    printf("%c \n",character);
    char character1='ab';
    printf("%c \n",character1);
    char character3='5';
    printf("%c \n",character3);
    char character4='54';
    printf("%c \n",character4);


    /*------it will print character to a number.-----*/
    char character5='a';
    printf("%d \n",character5);   //output 97
    char character6='A';
    printf("%d \n",character6);     //output 65

    /*------it will print number to a character-----*/
    char character7='97';
    printf("%c \n",character5);   //output a
    char character8='65';
    printf("%c \n",character6);     //output A

}
/* ----Data types--------
1)the DataType is to 'specify the data' that stored in 'variable'.
*/
/*-----Types of DataBase------

int      (4 bytes)   |  %d for printing
double   (8 bytes)   |  %lf for printing
float    (4 bytes)   |  %f for printing
char     (1 bytes)   |  %c for printing
*/
