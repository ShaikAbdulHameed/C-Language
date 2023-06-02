#include<stdio.h>

int main()
{
    int n=3;
    int* ptr;
    ptr=(int*)malloc(n * sizeof(int)); //n is no. of integer values to store

    if(ptr==NULL){
        printf("memory not allocated");
    }

    printf("Enter input values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    printf("input values:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
free(ptr);
}

/* ---Dynamic memory allocation -----
3 types
1)malloc()-it stands for memory allocation.
2)free()- once the malloc() is done after to release the allocated memory to zero as free. ex: free(ptr);
3)realloc()-
*/
