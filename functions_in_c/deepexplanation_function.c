#include<stdio.h>
/*******prototype for identify******/
float fun(float a,float b);
 /******main for execution logic******/
int main()
{
    //int x=10,y=20;
    float x,y;                //int x,y; dont use.incorrect output for float
    printf("Enter two numbers\n");
    scanf("%f %f",&x,&y);          //scanf("%d %d",&x,&y); dont use.incorrect output for float
    float mul=fun(x,y);
    printf("The multiplication of two numbers is %.2f",mul);
}

/*****function is for logic *****/

float fun(float a,float b)  //float fun(a,b) not executed.
{

float mul=a*b;
//return a*b;
}

