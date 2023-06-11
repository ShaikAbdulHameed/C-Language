#include<stdio.h>


float funcn(float x); //without prototype cannot executes. this make error.

int main()
{
    float g=2.3;
    float h=funcn(g);
    printf("%.2f",h);
}
float funcn(float x)
{
    return x*2;
}
