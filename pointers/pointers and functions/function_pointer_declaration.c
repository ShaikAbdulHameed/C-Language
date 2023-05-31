#include<stdio.h>
int findnum(int* num)
{
    *num=32;
}
int main()
{
    int number=35;
   // int n=findnum(&number); //wrong
    //printf("The Number is: %d",n); //wrong
    printf("The Number is: %d\n",number); //it prints 35

    findnum(&number);
    printf("The Number is: %d",number); //it prints 32


}

