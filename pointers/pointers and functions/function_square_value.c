#include<stdio.h>
int findsquare(int* num)
{
    int square=*num * *num; //*num is the number multiplies with *num.
    *num=square;
}
int main()
{
    int number=5;
    findsquare(&number);
    printf("The Square is: %d",number); //it prints 32


}


