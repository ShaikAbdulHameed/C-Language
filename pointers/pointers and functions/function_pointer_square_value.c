    #include<stdio.h>
int* findsquare(int* num) //function pointer
{
    int square=*num * *num; //*num is the number multiplies with *num.
    *num=square;
}
int main()
{
    int number=5;
    int* result=findsquare(&number);
    printf("The Square is: %d",number); //it prints 32


}


