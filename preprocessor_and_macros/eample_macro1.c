#include<stdio.h>
#include<math.h>
#define PI 3.141  //here PI is the Macro
#define Area_of_the_circle(r) (PI*r*r)   //r is the radius
int main()
{
double radius=12.4;
double area=Area_of_the_circle(radius);
printf("%.2lf",area);
}


/* ---preprocessor-----
#include<math.h> is a preprocessor which includes #

*/
