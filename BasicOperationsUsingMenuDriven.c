#include<stdio.h>
int main()
{
   int a,b,sum,sub,mul,divide,num;
   printf("Enter the values of a and b:");
   scanf("%d%d",&a,&b);
   printf("Enter your choice:1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n");
   scanf("%d",&num);
   switch(num)
   {
case 1:
      sum=a+b;
      printf("Sum of a and b is %d",sum);
      break;
case 2:
      sub=a-b;
      printf("Difference of a and b is %d",sub);
      break;
case 3:
      mul=a*b;
      printf("Product of a and b is %d", mul);
      break;
case 4:
      divide=a/b;
      printf("division of a and b is %d", divide);
      break;
      default:
      printf("Enter correct value");
      break;
   }
   return 0;
}
