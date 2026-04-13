#include<stdio.h>
int main()
{
   float r,h;
   float volume;
   printf("Enter radius of the cone:");
   scanf("%f",&r);
   printf("Enter height of the cone:");
   scanf("%f",&h);
   //calculating volume of cone
   volume=(3.14*r*r*h)/3;
   printf("\n volume of cone is:%.2f",volume);
   return 0;
}
[24bcs031@mepcolinux sem1]$./4_output
Enter radius of the cone:5
Enter height of the cone:8

 volume of cone is:209.33
