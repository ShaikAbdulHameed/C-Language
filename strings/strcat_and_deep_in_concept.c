#include<stdio.h>
#include<string.h>
int main()
{
char str1[]="shaik";
char str2[]=" Abdul";
strcat(str1,str2); //syntax: strcat(destination,source)// the string 2 is concatenates with string1 //left to right
printf("%s\n",str1); //concatenated string str1
printf("%s\n",str2); //not concatinated
char str3[]=" hameed";
strcat(str1,str3);
printf("%s\n",str1);

/*  without using strcat to print string

char str1[]="shaik";
char str2[]="Abdul";
char str3[]="hameed";

printf("%s %s %s",str1,str2,str3);
*/



/*char str1[]="shaik";
char str2[]=" Abdul";
char str3[]=" hameed";
strcat(str1,str2,str3); //error declaration
printf("%s",str1); */




}

