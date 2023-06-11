/*
#include<stdio.h>
//enum week{sun=1,mon,tue,wed,thu,fri,sat};
main(){
    enum week{sun=1,mon,tue,wed,thu,fri,sat};
    for(int i=sun;i<=sat;i++)
    {
        printf("%d\n",i);
    }
return 0;
}
*/
/*---enum----
enum is a variable.

syntax:
enum size{
Small,
Medium,   //these are constants also called integral constants.
Large,
Extralarge

}
*/
#include<stdio.h>

/*enum size{
Small,
Medium,   //these are enum constants starts from '0'
Large,
Extralarge */

enum size{
Small=27,
Medium=31,   //these are enum constants starts from '0'
Large=35,
Extralarge=40
};
int main(){
enum size shoesize1 =Small;
enum size shoesize2 =Medium;
enum size shoesize3 =Large;
enum size shoesize4 =Extralarge;

printf("%d\n",shoesize1);
printf("%d\n",shoesize2);
printf("%d\n",shoesize3);
printf("%d\n",shoesize4);

/*enum size shoesize;
shoesize=Extralarge;
printf("%d",shoesize); *///output is 3 here internally have value of Extralarge
}
