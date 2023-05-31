#include<stdio.h>

main()
{
    printf("A program to demonstrate storage classes\n");
    autoStorageClasses();
    registerStorageClasses();
    externStorageClasses();
    staticStorageClasses();




    // presenting storage classes (auto,static,extern,register)
    int x;
    void autoStorageClass()
    {
        printf("demonstate auto class\n");

        auto int a=10;  //if you not write auto it will take default auto.
        printf("variable declaration of auto is %d\n",a);     //on difference in output
        printf("------------------------------------------");
    }
    void registerStorageClass()
    {
        printf("demonstate register class\n");

        register int b=10;
        printf("variable declaration register is %d\n",b);   //on difference in output
        printf("------------------------------------------");
    }
   void externStorageClass()
    {
        printf("demonstate register class\n");

        extern int c;
        printf("variable declaration extern is %d\n",c);    //getting error on undefined 'c'
        c=10;
        printf("After modification of variable in extern is %d\n",c);
        printf("------------------------------------------");
    }

     void staticStorageClass()
    {
        printf("demonstate register class\n");
        for(int i=1;i<5;i++)
        {
            static int y=5; ////declaration of static variable
            int p=20;   //declaration of non-static variable
            y++;  //static increment
            p++;  //non static increment
            printf(" the value of static iteration i=%d y=%d\n",i,y);          //no difference in output of static and non-static
            printf(" the value of non-static iteration i=%d y=%d\n",i,y);

        }
        printf("loop end\n");
        printf("------------------------------------------");
    }

}

