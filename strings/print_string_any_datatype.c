#include<stdio.h>

    int main()
    {
        float rows[100];  //you write any datatype, int,float,char,double you have same output using '%s'
        printf("Enter the rows :");
        fgets(rows,100,stdin);
        printf("%s",rows);
    }

