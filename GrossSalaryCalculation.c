#include<stdio.h>
int main()
{
   float gs,bp,da,hra,allowance;
   printf("Enter basicpay:",bp);
   scanf("%f",&bp);
   da=(0.5*bp);
   printf("da=%.2f\n",da);
   hra=(0.1*bp);
   printf("hra=%.2f\n",hra);
   allowance=1000;
   printf("allowance=%.2f\n",allowance);
   gs=bp+da+hra+allowance;
   printf("Gross Salary:%.2f",gs);
   return 0;
}
[24bcs031@mepcolinux sem1]$./5_output
Enter basicpay:10000
da=5000.00
hra=1000.00
allowance=1000.00
Gross Salary:17000.00
