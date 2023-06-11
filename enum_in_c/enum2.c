
#include<stdio.h>
//enum week{sun=1,mon,tue,wed,thu,fri,sat};
main(){
    enum week{sun=1,mon,tue,wed,thu,fri,sat};
    for(int i=sun;i<=sat;i++)
    {
        printf("%d",i);
    }
return 0;
}
