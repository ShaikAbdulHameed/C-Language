#include<stdio.h>
int main()
{
    char operator='+';
    int a,b,result;
    a=10;
    b=20;
    result=(operator=='+')? (a+b):(a-b);
    printf("%d",result);
}


/* -- Ternary operator syntax --


test_condition ? expression1 : expression2;  // the output is true prints 'expression1' else 'expression2'.

*/
