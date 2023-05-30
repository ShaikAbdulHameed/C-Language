#include<stdio.h>
typedef struct Person{  //typedef is used
    double salary;
    int age;
} person;   //here 'person' acts like 'struct Person'

int main()

{
    /*--type def to struct Person---
    struct Person person1;
    struct Person person2; */

    person person1; //instead of 'struct Person' for typedef using 'person'
    person person2;

    person1.salary=27000;
    person1.age=32;

    person2.salary=21000;
    person2.age=25;

    printf("Age of the person: %d\n",person1.age);
    printf("salary of the person: %.2f\n",person1.salary);

    printf("Age of the person: %d\n",person2.age);
    printf("salary of the person: %.2f\n",person2.salary);


}
