#include<stdio.h>
int val(); //without prototype getting error
             //default is int
int main()
{
val();
}
int val()  //default is int
{
    printf("%d",2); //if you give 2.3 getting wrong output
}
