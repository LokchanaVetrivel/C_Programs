#include<stdio.h>
int main()
{
   int decimal,binary=0,remainder,base=1;
   printf("Enter a decimal number:");
   scanf("%d",&decimal);
   while(decimal!=0){
      remainder=decimal%2;
      binary+=remainder*base;
      decimal=decimal/2;
      base=base*10;
   }
   printf("Binary equivalent:%d",binary);
   return 0;
}
[24bcs031@mepcolinux sem1]$./3-3
Enter a decimal number:4
Binary equivalent:100
