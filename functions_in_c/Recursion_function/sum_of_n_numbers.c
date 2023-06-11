#include<stdio.h>
//int sum(int n);   //function prototype optional for use. it is used for programmer identify a function used.
void main()
{
    int number,result;
    printf("Enter a positive number:\n");
    scanf("%d",&number);

    result=sum(number);

    printf("\n sum=%d",result);
}

int sum(int n)    // repeating function
{
    if(n!=0){
        return n+sum(n-1);  //sum() function call itself(recursive). function calls many times.
    }
    else{
        return n;
    }
}
/* --- Recursion function --
DEFINITION: function called it self.

-----1st SYNTAX-----

void recurse(){
     ...
     recurse();   //infinite function executes
     ...
}

int main()
{
     ...
     recurse();
     ...
}

-----2nd SYNTAX-----

 void recurse(){
     ...

     if(condition){
        ...
     }
     else{
     recurse();
     }
     ...
}

int main()
{
     ...
     recurse();
     ...
}






*/
