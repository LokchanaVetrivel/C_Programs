[24bcs031@mepcolinux sem1]$./powercat powermakecat circle.h
#include<stdio.h>
float diameter(float r);
float area(float r);
float circumference(float r);
[24bcs031@mepcolinux sem1]$cat circle.himp.c
#include"circle.h"
float diameter (float r){
   return r*2;
}
float area(float r){
   return r*3.14*r;
}
float circumference (float r){
   return 2*3.14*r;
}
[24bcs031@mepcolinux sem1]$cat circleimp.capp.c
#include"circle.h"
int main()
{
   float r, d, a, c;
   printf("Enter the radius of the circle:\n",r);
   scanf("%f",&r);
   d=diameter(r);
   printf("The diameter of circle is %.2f\n",d);
   a=area(r);
   printf("The area of the circle is %.2f\n",a);
   c=circumference(r);
   printf("The circumference of the circle is %.2f\n",c);
   return 0;
}
[24bcs031@mepcolinux sem1]$cat circleapp.cmake
circleout: circleimp.o circleapp.o
        cc circleimp.o circleapp.o -o circleout
circleimp.o: circleimp.c circle.h
        cc -c circleimp.c
circleapp.o: circleapp.c circle.h
        cc -c circleapp.c
[24bcs031@mepcolinux sem1]$./circl3eout
Enter the radius of the circle:
3
The diameter of circle is 6.00
The area of the circle is 28.26
The circumference of the circle is 18.84
[24bcs031@mepcolinux sem1]$./circleout
Enter the radius of the circle:
5
The diameter of circle is 10.00
The area of the circle is 78.50
The circumference of the circle is 31.40
