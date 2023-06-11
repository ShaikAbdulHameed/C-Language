#include<stdio.h>
void main()
{
    int n=3,i;  //initialized
    int a[n];  //a[]={1,2,3} is ok but not taking syntax a[n]={1,2,3}.
    printf("enter 3 array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
