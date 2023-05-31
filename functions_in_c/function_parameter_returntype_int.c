#include<stdio.h>
int functionName(num)  //Return type is int
{
    return num;
}

int main()
{
     int para;
     para=functionName(3);    // passing the parameter value 0,1,2,....etc to execute;
     printf("%d",para);



}
/* ----write another way---------
#include<stdio.h>

int main()
{
     int para;
     para=functionName(3);    // passing the parameter value 0,1,2,....etc to execute;
     printf("%d",para);
}
int functionName(num)  //Return type is int
{
    return num;
}

*/

/* ----write another way---------
#include<stdio.h>
int functionName(num)  //Return type is int
{
    return 3;
}

int main()
{
     int para=functionName();    // passing the parameter value 0,1,2,....etc to execute;
     printf("%d",para);



}
*/


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
