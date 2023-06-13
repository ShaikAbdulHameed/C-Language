#include<stdio.h>

    int main()
    {
        char str1[100];               // char str[100]="hello world"; dont initialize if taking input.
        printf("print name: ");
        //fgets(str,sizeof(str),stdin);    // fgets(str,strlen(str),stdin); dont use strlen
        scanf("%s",str1);    /*output is ->print name: Abdul hameed
                                                       Abdul */  //scanf is not prints string after space.
        printf("%s",str1);

    }

