#include<stdio.h>
#include<math.h>
int main()
{
   int number,originalnumber,rem,result=0;
   int n=0;
   printf("Enter a number");
   scanf("%d",&number);
   originalnumber=number;
   do{
     originalnumber /=10;
     ++n;
   }
   while (originalnumber!=0);
   originalnumber=number;
   do{
      rem=originalnumber%10;
      result+=pow(rem,n);
      originalnumber/=10;
   }
   while(originalnumber!=0);
   if (result  == number){
      printf("It is an armstrong number",number);
   }
   else{
      printf("It is not an armstrong number",number);
   }
   return 0;
}
