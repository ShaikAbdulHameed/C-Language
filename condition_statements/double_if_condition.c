#include<stdio.h>

void main()
{
int age=16;

printf("Enter your age \n");
scanf("%d",&age);

if(age>=18)
{
    printf("you are Eligible to vote");
}
if(age<18)
{
    printf("you are not Eligible to vote");
}
}


/* --- syntax of if statement ----

    if(test_condition)    // the 'if' statement start with 'if' keyword.
                      // here 'test_condition' is the 'boolean expression'. To check condition whether true or false.
                      // Here true is indicates '1' and false is indicates '0'
    {

      // body of if statement

     }

*/
