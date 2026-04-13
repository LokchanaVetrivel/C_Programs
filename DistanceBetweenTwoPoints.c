#include<stdio.h>
#include<math.h>
int main()
{
   float x1,y1,x2,y2,distance;
   printf("Enter point 1 (x1,y1)");
   scanf("%f%f",&x1,&y1);
   printf("Enter point 2 (x2,y2)");
   scanf("%f%f",&x2,&y2);
   distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   printf("Distance between is %.2f",distance);
   return 0;
}
[24bcs031@mepcolinux sem1]$./6_output
Enter point 1 (x1,y1)2 3
Enter point 2 (x2,y2)4 5
Distance between is 2.83
