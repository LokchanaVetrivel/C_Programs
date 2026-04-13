#include<stdio.h>
int main()
{
   int num1=10,num2=20;
   int *ptr=&num1;
   printf("Value of num1:%d\n",num1);
   printf("Address of num1:%p%u%x\n",&num1,&num1,&num1);
   printf("Address of num1 using pointer:%p\n",ptr);
   printf("Value of ptr:%p\n",ptr);
   printf("Value pointed to by pointer:%d\n",*ptr);
   printf("Address of pointer:%p\n",&ptr);
   *ptr=num2;
   printf("Modified value of num1:%d\n",num1);
   ptr=&num2;
   printf("Value of num2:%d\n",num2);
   printf("Address of num2:%p%u%x\n",&num2,&num2,&num2);
   printf("Address of num2 using pointer:%p\n",ptr);
   printf("Value of pointer:%p\n",ptr);
   printf("Value pointed to by ptr:%d\n",*ptr);
   printf("Address of ptr:%p\n",&ptr);
   return 0;
}
[24bcs031@mepcolinux sem1]$cc 7address.c
[24bcs031@mepcolinux sem1]$./a.out
Value of num1:10
Address of num1:0x7ffed11b72ac3508236972d11b72ac
Address of num1 using pointer:0x7ffed11b72ac
Value of ptr:0x7ffed11b72ac
Value pointed to by pointer:10
Address of pointer:0x7ffed11b72a0
Modified value of num1:20
Value of num2:20
Address of num2:0x7ffed11b72a83508236968d11b72a8
Address of num2 using pointer:0x7ffed11b72a8
Value of pointer:0x7ffed11b72a8
Value pointed to by ptr:20
Address of ptr:0x7ffed11b72a0
