/* #include<stdio.h>

//union also enters before the main
struct Add
{
    int a,b,temp; //it will share different memory locations
};

main()
{
     struct Add add;

    printf("enter 1st number ");
    scanf("%d",&add.a);
    printf("enter 2st number ");
    scanf("%d",&add.b);
    printf("entered number %d %d \n",add.a,add.b);
    add.temp=add.a+add.b;      // in struct getting correct result and not in union
    printf("the sum of two numbers are %d",add.temp);

    return 0;
} */


#include<stdio.h>
struct person{
    double salary;
    int age;
} person1,person2; //Another method of struct initialization

int main()

{
    /*-- Another method of struct initialization---
    struct person person1;
    struct person person2;

    person1.salary=27000;
    person1.age=32;

    person2.salary=21000;
    person2.age=25;  */

    /*-- Another method of struct initialization---
    struct person person1={.salary=27000,.age=32};
    struct person person2={.salary=21000,.age=25};
    */

    person1.salary=27000;
    person1.age=32;

    person2.salary=21000;
    person2.age=25;


    printf("Age of the person: %d\n",person1.age);
    printf("salary of the person: %.2f\n",person1.salary);



    printf("Age of the person: %d\n",person2.age);
    printf("salary of the person: %.2f\n",person2.salary);


}



