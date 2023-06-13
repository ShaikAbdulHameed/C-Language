#include<stdio.h>

    int main()
    {
    char str[100];
    printf("enter a string:");
    fgets(str,100,stdin);//scanf("%s",str); //it prints before space string of enter input.
    printf("entered string is %s",str);
}
