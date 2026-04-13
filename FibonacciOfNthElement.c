[24bcs031@mepcolinux sem1]$./primecat fibo.h
#include<stdio.h>
int fibo(int n);
[24bcs031@mepcolinux sem1]$cat fiboimp.c
#include"fibo.h"
int fibo(int n){
   if(n==0){
      return 0;
   }
   else if(n==1){
      return 1;
   }
   else{
      return fibo(n-1)+fibo(n-2);
   }
}
[24bcs031@mepcolinux sem1]$cat fiboapp.c
#include"fibo.h"
int main()
{
   int n;
   printf("Enter the term to be printed:");
   scanf("%d",&n);
   printf("Fibonacci series of the %dth element is %d\n",n,fibo(n));
   return 0;
}
[24bcs031@mepcolinux sem1]$cat fibomake
fiboout: fiboimp.o fiboapp.o
        cc fiboimp.o fiboapp.o -o fiboout
fiboimp.o: fiboimp.c fibo.h
        cc -c fiboimp.c
fiboapp.o: fiboapp.c fibo.h
        cc -c fiboapp.c
[24bcs031@mepcolinux sem1]$./fiboout
Enter the term to be printed:3
Fibonacci series of the 3th element is 2
[24bcs031@mepcolinux sem1]$./fiboout
Enter the term to be printed:4
Fibonacci series of the 4th element is 3
