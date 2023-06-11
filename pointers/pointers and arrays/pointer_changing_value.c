#include<stdio.h>
int main()
{
    int numbers[5]={1,3,5,7,9};

    *numbers=2;
    *(numbers+4)=11;
   /* printf("First Element: %d\n",*numbers);
    printf("second Element: %d\n",*(numbers+4)); */
    printf("First Element: %d\n",numbers[0]);  //also use
    printf("second Element: %d\n",numbers[4]);

}

