#include<stdio.h>

 //hai(a,b)   // with out initialize variable a,b it takes  defaults to 'int'
 //hai(int a,int b)  // return type of 'hai' function is 'int'

 int hai(int a,int b)   //Also use 'void hai(int a,int b)'
 {
   int c=a+b;
//printf("%d",c);
return c;     //output process return 40
}

void main()
{

    hai(20,20);

    }


