#include<stdio.h>
#include<string.h>
//union  enters before the main
union Add
{
    int a;
    int b;
    int temp;  //it will share same memory location
};

main()
{
     union Add add;

    /*printf("enter 1st number ");
    scanf("%d",&add.a);
    printf("enter 2st number ");
    scanf("%d",&add.b);
    printf("entered number %d %d \n",add.a,add.b);
    add.temp =add.a + add.b; */  //not proper done on addition it only shares memory location.

    add.a=10;
    add.b=8;    //error got on only adding b
    add.temp =add.a + add.b;  //getting b+b=answer
    printf("the sum of two numbers are %f",add.temp);

    return 0;
}
