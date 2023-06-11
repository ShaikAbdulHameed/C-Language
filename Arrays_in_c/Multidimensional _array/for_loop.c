#include<stdio.h>
int main()
{
    int i,j;
                       //0 1 2
    int arr[2][3]={/*0*/{1,2,3},
                   /*1*/{4,5,6}};
                   //here 2 means 2 arrays. 3 means 3 elements in each array.
    for(i=0;i<2;i++)       //for row //here 2 times iteration occurs
        {
        for(j=0;j<3;j++)   //for column //here 3 times iteration occurs
            {
            printf("%d ",arr[i][j]); //sequence output
        }
    }

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
