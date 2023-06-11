#include<stdio.h>
void main()
{
    function_rec();
}

 int function_rec()
 {
     //function_rec();   After the printf it doesnt works.output is empty.
     printf("hai recursion");
     function_rec();      //After the printf statement it works as recursive.
 }
