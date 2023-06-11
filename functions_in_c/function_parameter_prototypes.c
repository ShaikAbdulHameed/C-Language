#include<stdio.h>
int functionName(para);  //function prototype //void,int,long.... etc., is a return type.
int main()
{

    int para = functionName();
    printf("%d",para);

}

int functionName(para)
{

    return 5;
}

/* ----write another way----

#include<stdio.h>
int functionName(para);  //function prototype //void,int,long.... etc., is a return type.

int functionName(para)
{

    return 5;
}
int main()
{

    int para = functionName();
    printf("%d",para);

}

*/



/* -----syntax of functioin prototypes--------

#include<stdio.h>
returntype functionName(parameters);  //void,int,long.... etc., is a return type.
int main()
{
     .....
     functionName(parametervalue);
     .....
}

returntype functionName(parameters)
{
    ........
    ........
    return parametervalue;
}


*/
