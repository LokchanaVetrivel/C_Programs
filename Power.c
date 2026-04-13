[24bcs031@mepcolinux sem1]$cat power.h
#include<stdio.h>
double power(int base, int exponent);
[24bcs031@mepcolinux sem1]$cat powerimp.c
#include"power.h"
double power(int base, int exponent){
   if(exponent==0){
      return 1;
   }
   else if(exponent<0){
      return (1/power(base,-1*exponent));
   }
   else{
      return base*power(base,exponent-1);
   }
}
[24bcs031@mepcolinux sem1]$cat powerapp.c
#include"power.h"
int main()
{
   int base, exponent;
   double pow;
   printf("Enter the base:");
   scanf("%d", &base);
   printf("Enter the exponent:");
   scanf("%d",&exponent);
   pow=power(base,exponent);
   printf("%d raised to power of %d is:%.2f\n",base,exponent,pow);
   return 0;
}
[24bcs031@mepcolinux sem1]$cat powermake
power: powerimp.o powerapp.o
        cc powerimp.o powerapp.o -o power
powerimp.o: powerimp.c power.h
        cc -c powerimp.c
powerapp.o: powerapp.c power.h
        cc -c powerapp.c
[24bcs031@mepcolinux sem1]$./power
Enter the base:3
Enter the exponent:-1
3 raised to power of -1 is:0.33
[24bcs031@mepcolinux sem1]$./power
Enter the base:3
Enter the exponent:0
3 raised to power of 0 is:1.00
