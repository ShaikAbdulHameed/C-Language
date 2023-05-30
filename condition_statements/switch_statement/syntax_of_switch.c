#include<stdio.h>
void main()
{
    int number;
    printf("enter number from 1 to 7 \n");
    scanf("%d",&number);
    switch(number)
    {
    case 1:                  // here '1' is given input from 'number'
        printf("Sunday");
        break;           //'continue' is not use in switch statement;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("fridaY");
        break;
    case 7:
        printf("saturday");
        break;
    default:
        printf("invalid number");
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
