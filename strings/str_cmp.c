#include<stdio.h>
#include<string.h>
int main()
{
char str1[]="Abdul";
char str2[]="Abdul";
char result=strcmp(str1,str2);  //int result=strcmp(str1[0],str2[0]); not getting output
printf("%s",result); //it shows "(NULL)".

