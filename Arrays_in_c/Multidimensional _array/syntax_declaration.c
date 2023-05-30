#include<stdio.h>
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}}; //here 2 means 2 arrays. 3 means 3 elements in each array.
printf("The first Array prints that means first row \n");
   printf("%d\n",arr[0][0]);
   printf("%d\n",arr[0][1]);
   printf("%d\n\n",arr[0][2]);

printf("The second Array prints that means second row \n");
   printf("%d\n",arr[1][0]);
   printf("%d\n",arr[1][1]);
   printf("%d\n",arr[1][2]);

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
