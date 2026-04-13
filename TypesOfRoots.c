#include<stdio.h>
#include<math.h>
int main()
{
   float s, r1,r2, a,b,c,d;
   printf("Enter a,b,c");
   scanf("%f%f%f", &a,&b,&c);
   d=(b*b)-(4*a*c);
   if(d>0){
      r1=-b+sqrt(d)/2*a;
      r2=-b+sqrt(d)/2*a;
      printf("Roots are real and distinct %f%f%f",r1,r2);
      printf("%.2f and %.2f are the roots \n",r1,r2);
   }
   else if(d==0){
      r1=-b/(2*a);
      r2=-b/(2*a);
      printf("Root are real and equal%f%f%f",r1,r2);
      printf("%.2f and%.2f are the roots \n",r1,r2);
   }
   else{
      r1=-b/(2*a);
      r2=sqrt(-d)/(2*a);
      printf("Roots are imaginary %f%f%f",r1,r2);
      printf("%.2f+%.2fi and %.2f-%.2fi\n",r1,r2,r1,r2);
   }
   return 0;
}
Enter a,b,c6 6 2
Roots are imaginary -0.5000000.2886750.000000-0.50+0.29i and -0.50-0.29i
