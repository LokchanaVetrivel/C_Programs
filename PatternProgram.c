#include<stdio.h>
int main()
{
   int i,j,n,s,a=1;
   printf("Enter the number of columns:");
   scanf("%d",&n);
   s=n-1;
   for (i=1;i<n*2;i++){
      for (j=1;j<=s;j++){
         printf(" ");
      }
      for(j=1;j<=a;j++){
         printf("*");
      }
      printf("\n");
      if(i<n){
         s--;
         a++;
      }
      else{
         s++;
         a--;
      }
   }
   return 0;
}
[24bcs031@mepcolinux sem1]$./3-6
Enter the number of columns:5
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
