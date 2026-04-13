#include<stdio.h>
#include<math.h>
int main()
{
   float principal,rate,time,si,ci;
   int n;
   printf("Enter the principal amount:");
   scanf("%f",& principal);
   printf("Enter the Interest rate:");
   scanf("%f",& rate);
   printf("Enter the time period in years:");
   scanf("%f",& time);
   si=(principal*rate*time)/100;
   printf("Simple Interest:%.2f\n",si);
   printf("Enter the number of times interest is compounded per year");
   scanf("%d",&n);
   ci=principal*((1+(rate/n)),(n*time));
   printf("compound imterest:%.2f\n",ci);
   return 0;
}
[24bcs031@mepcolinux sem1]$./3_output
Enter the principal amount:1000
Enter the Interest rate:10
Enter the time period in years:2
Simple Interest:200.00
Enter the number of times interest is compounded per year1
compound imterest:2000.00
