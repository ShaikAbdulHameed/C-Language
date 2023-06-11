#include<stdio.h>
void main()
{
     int n=1; //before index initialize
     printf("enter index for array elements\n");
     scanf("%d",&n);  //output initialize
     int a[n],i;
     printf("enter the %d values\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("entered values are:\n",n);
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
