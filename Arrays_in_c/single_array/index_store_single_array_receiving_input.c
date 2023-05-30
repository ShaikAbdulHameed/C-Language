#include<stdio.h>
void main()
{
    //int age[5]={22,23,35,46,47};
    int age[5];

    printf("Enter 5 input values \n");
    scanf("%d",&age[0]);
    scanf("%d",&age[1]);           //receiving input from user
    scanf("%d",&age[2]);
    scanf("%d",&age[3]);
    scanf("%d",&age[4]);

    printf("\n%d\n",age[0]);
    printf("%d\n",age[1]);
    printf("%d\n",age[2]);
    printf("%d\n",age[3]);
    printf("%d\n",age[4]);

}





/* ---Array ----

Definition:
-----------
An array is the collection of similar type of data.

purpose of array:
suppose we need to store the 'age' of 100 people we need 100's variable to store age of individual. this make complex.
**here single array stores the age of 100 people **

Syntax of Array:
-----------------

datatype Arrayname[array_size (or) index (or) position];

ex: int age[5]; //her age store 5 values. 0,1,2,3,4 of positions or index (age[0],age[1],age[3],age[4],age[5])

Array initialization:
---------------------

int age[5]={22,23,35,46,47};

int age[5]={22,23,35}; //here two position is zero.

int age[]={22,23,35,46,47}; //default take size 5.
*/

