#include<stdio.h>
int functionName(num1,num2)  //Return type is int
{
    int sum=num1+num2;
    return sum;
}

int main()
{
     int para=functionName(3,5);    // passing the parameter value 0,1,2,....etc to execute;
     printf("%d",para);



}


/* Return types in function parameter

Return types are the DataTypes. It stores and print the value.

Return types are : void,int,short,char,double,long,float,etc.,
*/

/* -----syntax of Return types--------

#include<stdio.h>
returntype functionName(parameters)  //void,int,long.... etc., is a return type.
{
    ........
    ........
    return parametervalue;
}

int main()
{
     .....
     functionName(parametervalue);
     .....
}
*/
