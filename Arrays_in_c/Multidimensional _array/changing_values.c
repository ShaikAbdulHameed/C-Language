#include<stdio.h>
int main()
{
                       //0 1 2
    int arr[2][3]={/*0*/{1,2,3},
                   /*1*/{4,5,6}};
                   //here 2 means 2 arrays. 3 means 3 elements in each array.
   printf("The 2 rows and 4 colums\n");

   printf("%d %d %d \n",arr[0][0],arr[0][1],arr[0][2]);
   printf("%d %d %d \n\n",arr[1][0],arr[1][1],arr[1][2]);
   //change values
   arr[0][0]=7;
   arr[0][1]=8;
   arr[0][2]=9;
   printf("After changing values \n");
   printf("%d %d %d \n",arr[0][0],arr[0][1],arr[0][2]);
   printf("%d %d %d",arr[1][0],arr[1][1],arr[1][2]);

}



/*  ----Multidimensional array ---
Def: it also stores multiple elements like single array.

syntax:

datatype arrayname[row_size][column_size]

ex: int arr[2][3]  //2*3=6 elements are stored.
//here not individual arr[2]={1,2}, arr[3]={1,2,3}
//here 2 is the rows 3 is the columns.
//here 2 means 2 arrays. 3 means 3 elements in each array.
*/
