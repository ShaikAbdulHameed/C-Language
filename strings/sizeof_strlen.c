#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="abdul hameed"; //12 characters include space.
    printf("%d\n",strlen(a)); //printf("%d\n",strlen(char)); error
    printf("%d",sizeof(a)); //12 characters include space with \n. printf("%d",sizeof(char)); it shows 1 byte.
}
