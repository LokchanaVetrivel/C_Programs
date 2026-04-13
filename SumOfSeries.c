#include<stdio.h>
int main()
{
   int n,i;
   float sum=0.0;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
      sum+=1.0/i;
   }
   printf("\n sum of series upto %d term:%.2f \n",n,sum);
   return 0;
}
[24bcs031@mepcolinux sem1]$./3-5
Enter the number:5

 sum of series upto 5 term:2.28
