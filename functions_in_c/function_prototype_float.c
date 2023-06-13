#include<stdio.h>
float val(); //without prototype getting error
int main()
{
val();
}
float val()
{
    printf("%.2f",2.3);
}
