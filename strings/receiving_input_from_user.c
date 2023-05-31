#include<stdio.h>
int main()
{
    //receiving input string from user
    char str[20]; //compulsory assign index not empty it gets error.
    printf("enter your name");
    scanf("%s",str); //scanf("%s",&str) not to use why becaouse 'str' is the array it already points to the address of a first element of str.
    printf("%s",str);

}

/*----strings----
Def: strings are the collection of characters. it represents in ""(double quotes). '\0' is the null charater. null character is used to identify the end of the string.

ex: printf("hello");  //here hello is a string in double quotes using function printf();

ex:char str[]="programiz"; //this code is similar to -> char str[]={'p','r','o','g','r','a','m','i','z'}
*/
