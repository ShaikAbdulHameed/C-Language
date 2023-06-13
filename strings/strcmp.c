#include<stdio.h>
#include<string.h>
int main()
{
char str1[]="Abdul";
char str2[]="Abdul";
int result=strcmp(str1,str2);  //int result=strcmp(str1[0],str2[0]); not getting output
printf("%d",result); //if getting 0 strings are equal

/*char str1[]="shaik";
char str2[]=" Abdul";
int result=strcmp(str1,str2);
printf("%d",result); //gettiing non zero value that means strings are not equal. if getting 0 strings are equal
*/
}

