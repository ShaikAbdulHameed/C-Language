#include<stdio.h>
char val(); //without prototype getting error
             //default is int
int main()
{
val();
}
char val()  //default is int
{
     printf("%c\n",'a');
    printf("%c\n",'abdul'); //if you enter any word ex: abdul it will show you output of last character 'l'
     printf("%c\n",'235');  //if you enter any word ex: 235 it will show you output of last character '5'
     printf("%s\n","abdul");  //it prints "abdul"
     printf("%s","23.5");     //it prints "23.5"
}
/* -----output ---------
a
l
5
abdul
23.5
