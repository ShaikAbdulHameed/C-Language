#include<stdio.h>
void main()
{
    char operator;
    int a,b;
    double result;
    printf("choose an operator['+','-','/','*'] \n");
    scanf("%c",&operator);   //%c to read character
    printf("enter the first and second value to make operation:\n");
    scanf("%d %d",&a,&b);
    switch(operator)
    {
    case '+':
        result=a+b;
        //printf("%.2f",result);    //default returns output without using input
        break;

    case '-':
        result=a-b;
        printf("%.2f",result);
        break;
    case '/':
        result=a/b;
        printf("%.2f",result);
        break;
    case '*':
        result=a*b;
        printf("%.2f",result);
      // printf("%.2f",&result);  // no result
        break;

    default:
        printf("invalid sign");
    }
}






/* ----Switch case syntax----
switch(vriable/expression)
{
case value1:
          // body of case 1
             break;
case value2:
          // body of case 2
             break;
.
.
.
case value_n:
           // body of case n
              break;

default:
        // body of default
}
*/
