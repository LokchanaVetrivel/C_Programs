#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter the value of a,b,c:");
   scanf("%d%d%d",&a,&b,&c);
   //without using conditional operator
   printf("Without using conditional operator\n");
   if(a>b && a>c){
      printf("%d is the maximum value\n",a);
   }
   else if(b>a && b>c){
      printf("%d is the maximum value\n",b);
   }
   else{
      printf("%d is the maximum value\n",c);
   }
   //Using conditional operation
   printf("using condional operator\n");
   int max=(a>b?(a>c?a:c):(b>c?b:c));
   printf("%d is maximum\n",max);
   return 0;
}
[24bcs031@mepcolinux sem1]$./two1
Enter the value of a,b,c:1 2 3
Without using conditional operator
3 is the maximum value
using condional operator
3 is maximum
