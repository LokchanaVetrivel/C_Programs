#include<stdio.h>
int main()
{
   int A,B,C;
   printf("Enter the three angles of the triangle:");
   scanf("%d%d%d",&A,&B,&C);
   if(A+B+C==180){
      printf("The triangle is valid \n");
   }
   else{
      printf("The trianlge is invalid \n");
   }
   return 0;
}

[24bcs031@mepcolinux sem1]$cat sem1triangle.c
Enter the three angles of the triangle:60 60 60
The triangle is valid
