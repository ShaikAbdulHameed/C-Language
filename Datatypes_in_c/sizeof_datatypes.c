#include<stdio.h>
void main()
{
    int a;
    double b;
    float f;
    char c;

    printf("int size =%zu  \n",sizeof(a));
    printf("double size =%zu  \n",sizeof(b));    // %zu is for sizeof (or) you can use %d.
    printf("float size =%zu  \n",sizeof(f));
    printf("char size =%zu  \n",sizeof(c));

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

