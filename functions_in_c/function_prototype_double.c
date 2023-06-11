#include<stdio.h>
double val(); ////without prototype getting error
int main()
{
val();
}
double val()
{
    printf("%.2lf",2.3);
}
