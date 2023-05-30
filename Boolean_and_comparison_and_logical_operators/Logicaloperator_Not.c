#include<stdio.h>
#include<stdbool.h>
void main()
{
int age=16;

//bool result!=(age>=18); // this syntax give an error
bool result=!(age>=18);  // if false it is true.output 1
printf("%d",result);


}


/* --- logical operators ----
3 logical operators

&&  AND
||  OR
!   NOT


*/
