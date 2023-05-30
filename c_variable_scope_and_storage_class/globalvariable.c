#include<stdio.h>
int result;     //here 'result' is a Global variable of global declararation without scope.
void addNumbers(int number1,int number2)
{                                      //scope starts  at '{'
    result=number1+number2;
    printf("Result in function =%d\n",result);  //function will executes first
}                                      //scope ends  at '}'



int main()
{
    addNumbers(5,6);
     printf("Result in main=%d",result);
}


/*------ variable scope -----
In c programming there are 2 types of scopes
1) Local variable scope
2) Global variable scope
*/
