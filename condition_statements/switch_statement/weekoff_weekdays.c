#include<stdio.h>
void main()
{
    int number;
    printf("enter number from 1 to 7 \n");
    scanf("%d",&number);
    switch(number)
    {
                      // here '1' is given input from 'number'
           //'continue' is not use in switch statement;
    case 2:

    case 3:

    case 4:

    case 5:

    case 6:
        printf("weekday");
        break;

    case 1:

    case 7:
        printf("weekend");
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
