#include<stdio.h>
int main()
{
    char operator='+';
    int a,b,result;
    a=10;
    b=20;
    result=(operator=='+')? (a+b):(a-b);  //if else have more lines instead of ternary operator. the ternary operator makes confuse in coding.
    printf("%d",result);
}

/*-- comparing if_else of ternary operator -----

#include<stdio.h>
int main()
{
    char operator='+';
    int a,b,result;
    a=10;
    b=20;
    if(operator=='+')
    {
    result=(a+b);
    printf("%d",result);
    }
    else
        {
    result=(a-b);
    printf("%d",result);
    }
}
*/

/* -- Ternary operator syntax --


test_condition ? expression1 : expression2;  // the output is true prints 'expression1' else 'expression2'.

*/
