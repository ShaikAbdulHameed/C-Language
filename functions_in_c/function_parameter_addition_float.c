#include<stdio.h>
#include<float.h>
/* total program not work */
float functionName(float num1,float num2);
int main()
{
     float a=10.5,b=20;
     float para=functionName(a,b);    // passing the parameter value 0,1,2,....etc to execute;
     printf("%.2f",para);
}
float functionName(float num1,float num2)  //Return type is int
{
    float sum=num1+num2;
    return sum;
}
