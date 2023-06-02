#include<stdio.h>

int main()
{
    int n=3;
    int* ptr;
    ptr=(int*)malloc(n * sizeof(int)); //n is no. of integer values to store

    if(ptr==NULL){
        printf("memory not allocated");
    }

    printf("Allocated Memory:\n");
    for(int i=0;i<n;i++)
    {
        printf("%p\n",(ptr+i));
    }

    n=6;  //size is incresed from 3 t0 6 for realloc

    ptr=realloc(ptr,n * sizeof(int));  //use it or not use is same output
    printf("Newely allocated memory\n");
     printf("Allocated Memory:\n");

    for(int i=0;i<n;i++)
    {
        printf("%p\n",(ptr+i));
    }



    free(ptr);
}

/* ---Dynamic memory allocation -----
3 types
1)malloc()-it stands for memory allocation. ex: ptr=(int*)malloc(n * sizeof(int));
2)free()- once the malloc() is done after to release the allocated memory to zero as free. ex: free(ptr);
3)realloc()-change the size into reallocate memory as dynamic. ex:ptr=realloc(ptr,n * sizeof(int));

*/
