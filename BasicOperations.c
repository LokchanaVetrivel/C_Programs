#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter value of a and b\n");
   scanf("%d%d", &a, &b);
   printf("Addition of %d and %d is %d \n",a,b,(a+b));
   printf("subraction of %d and %d is %d \n",a,b,(a-b));
   printf("Multiplication of %d and %d is %d \n",a,b,(a*b));
   printf("Division of %d and %d is %d \n",a,b,(a/b));
   printf("Modulus of %d and %d is %d \n",a,b,(a%b));
   return 0;
}
[24bcs031@mepcolinux sem1]$./1_output
Enter value of a and b
20 30
Addition of 20 and 30 is 50
subraction of 20 and 30 is -10
Multiplication of 20 and 30 is 600
Division of 20 and 30 is 0
Modulus of 20 and 30 is 20
