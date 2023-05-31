#include<stdio.h>
int main()
{
    //receiving input string from user
    char str[20];
    //char str[]; //getting error
    printf("enter your name");
    //scanf("%s",str); //print with space of "abdul hameed" not to use this scanf. it prints only abdul.
    fgets(str,sizeof(str),stdin); //her 'str' is string, sizeof(str) it takes size of string to print, stdin(standard input) is to take input.
    printf("%s",str);

}



/*----strings----
Def: strings are the collection of characters. it represents in ""(double quotes). '\0' is the null charater. null character is used to identify the end of the string.

ex: printf("hello");  //here hello is a string in double quotes using function printf();

ex:char str[]="programiz"; //this code is similar to -> char str[]={'p','r','o','g','r','a','m','i','z'}
*/
