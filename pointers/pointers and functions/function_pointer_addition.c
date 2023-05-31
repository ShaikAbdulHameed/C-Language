#include<stdio.h>
int* addnumber(int* num1,int* num2,int* sum) //function pointer
{
     *sum=*num1 + *num2; //*num is the number multiplies with *num.
    return sum;
}
int main()
{
    int number1=5;
    int number2=5;
    int add; //or use int sum;
    int* addition=addnumber(&number1,&number2,&add);
    printf("The Addition of two number is: %d",*addition); //


}

