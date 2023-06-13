#include<stdio.h>

    int main()
    {
        char str[100];               // char str[100]="hello"; dont initialize
        printf("print name: ");
        fgets(str,sizeof(str),stdin);    // fgets(str,strlen(str),stdin); dont use strlen
        printf("%s",str);

    }

