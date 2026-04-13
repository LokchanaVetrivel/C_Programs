#include<stdio.h>
int main ()
{
   char ch;
   printf("Enter the character:");
   scanf("%c",&ch);
   if(ch>=65 && ch<=90){
      printf("Uppercase");
   }
   else if(ch>=97 && ch<=122){
      printf("Lowercase");
   }
   else if(ch>=48 && ch<=57){
      printf("other digit");
   }
   else{
      printf("Special character");
   }
   return 0;
}
[24bcs031@mepcolinux sem1]$./two2
Enter the character:T
Uppercase
