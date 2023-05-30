#include<stdio.h>
void addNumbers(int number1,int number2)
{                                      //scope starts  at '{'
    int result=number1+number2;       //here 'result' is a Local variable in between scope { .. }
    printf("Result=%d",result);
}                                      //scope ends  at '}'

/*int main()
{
    addNumbers(5,6);
   //  printf("Result=%d",result); //here we get error of " 'result'undeclared "
}
*/

int main()
{
    int sum=addNumbers(5,6);   //assigning a function to a variable
     printf("Result=%d",sum);   // here 'sum' is also called Local variable with in scope.
}
/*------ variable scope -----
In c programming there are 2 types of scopes
1) Local variable scope
2) Global variable scope
*/
