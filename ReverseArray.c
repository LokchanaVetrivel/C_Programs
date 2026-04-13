[24bcs031@mepcolinux sem1]$cat 7reverse.h
#include<stdio.h>
#include<stdlib.h>
void reversearray(int *arr,int n);
[24bcs031@mepcolinux sem1]$cat 7reverseimp.c
#include"7reverse.h"
void reversearray(int *arr,int n){
   int *start=arr;
   int *end=arr+(n-1);
   int temp;
   while(start<end){
      temp=*start;
      *start=*end;
      *end=temp;
      start++;
      end--;
   }
}
[24bcs031@mepcolinux sem1]$cat 7reverseapp.c
#include"7reverse.h"
int main(){
   int n,i;
   int *arr;
   printf("Enter the size of the array:\n",n);
   scanf("%d",&n);
   arr=(int*)malloc(n*sizeof(int));
   if(arr==NULL){
      printf("Memory allocation is not successful.\n");
      return 1;
   }
   printf("Enter the %d elements:",n);
   for(i=0;i<n;i++){
      scanf("%d",arr+i);
   }
   reversearray(arr,n);
      printf("Reversed array:");
   for(i=0;i<n;i++){
      printf("%d ",*(arr+i));
   }
   printf("\n");
   free(arr);
   return 0;
}
[24bcs031@mepcolinux sem1]$cat 7reversemake
7reverse: 7reverseimp.o 7reverseapp.o
        cc 7reverseimp.o 7reverseapp.o -o 7reverse
7reverseimp.o: 7reverseimp.c 7reverse.h
        cc -c 7reverseimp.c
7reverseapp.o: 7reverseapp.c 7reverse.h
        cc -c 7reverseapp.c
[24bcs031@mepcolinux sem1]$./7reverse
Enter the size of the array:
5
Enter the 5 elements:1
2
3
4
5
Reversed array:5 4 3 2 1
