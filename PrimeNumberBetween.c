[24bcs031@mepcolinux sem1]$cat prime.h
#include"prime.h"
int prime(int n){
   if(n==0){
      return 0;
   }
   int count=0,i=1;
   while(i<=n){
      if(n%i==0){
         count++;
      }
      i++;
   }
   if(count==2){
      return 1;
   }
   else
      return 0;
}
[24bcs031@mepcolinux sem1]$cat primeimp.c
#include"prime.h"
int main(){
   int start,end;
   printf("Enter the starting point and ending point:\n");
   scanf("%d%d",&start,&end);
   int i;
   for(i=start;i<=end;i++){
      if(prime(i)){
         printf("%d ",i);
      }
   }
   printf("\n");
   return 0;
}
[24bcs031@mepcolinux sem1]$ cat primemake
prime: primeimp.o primeapp.o
        cc primeimp.o primeapp.o -o prime
primeimp.o: primeimp.c prime.h
        cc -c primeimp.c
primeapp.o: primeapp.c prime.h
        cc -c primeapp.c
[24bcs031@mepcolinux sem1]$./prime
Enter the starting point and ending point:
1
10
2 3 5 7
[24bcs031@mepcolinux sem1]$./prime
Enter the starting point and ending point:
10
20
11 13 17 19
