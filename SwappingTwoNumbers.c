#include<stdio.h>
int main()
{
   int a,b,t;
   printf("Enter value of a and b\n");
   scanf("%d%d",&a,&b);
   t=a;
   a=b;
   b=t;
   printf("Ater swapping:a=%d;b=%d\n",a,b);
   return 0;
}
[24bcs031@mepcolinux sem1]$./2_output
Enter value of a and b
10 5
Ater swapping:a=5;b=10
