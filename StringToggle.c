[24bcs031@mepcolinux sem1]$cat togcasehead.h
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void toggleusinglib(char str[]);
void togglewithoutlib(char str[]);
[24bcs031@mepcolinux sem1]$cat togcaseimp.c
#include"togcasehead.h"
void toggleusinglib(char str[]){
   int i=0;
   while(str[i]!='\0'){
      if(isupper(str[i])){
         str[i]=tolower(str[i]);
      }
      else if(islower(str[i])){
         str[i]=toupper(str[i]);
      }
      i++;
   }
}
void togglewithoutlib(char str[]){
   int i;
   for(i=0;str[i]!='\0';i++){
      if(str[i]>='A'&& str[i]<='Z')
         str[i]=str[i]+32;
      else if(str[i]>='a'&& str[i]<='z')
         str[i]-=32;
      else{
         continue;
      }
   }
}
[24bcs031@mepcolinux sem1]$cat togcaseapp.c
#include"togcasehead.h"
int main(){
   char str1[50],str2[50];
   printf("Enter a string:");
   scanf("%s",str1);
   strcpy(str2,str1);
   toggleusinglib(str1);
   togglewithoutlib(str2);
   printf("Using library function\n");
   printf("%s\n",str1);
   printf("Without using library function\n");
   printf("%s\n",str2);
   return 0;
}
[24bcs031@mepcolinux sem1]$cat togcasemake
togcaseout : togcaseimp.o togcaseapp.o
        cc togcaseimp.o togcaseapp.o -o togcaseout
togcaseimp.o : togcaseimp.c togcasehead.h
        cc -c togcaseimp.c
togcaseapp.o : togcaseapp.c togcasehead.h
        cc -c togcaseapp.c
[24bcs031@mepcolinux sem1]$./togcaseout
Enter a string:thirulokchana
Using library function
THIRULOKCHANA
Without using library function
THIRULOKCHANA
[24bcs031@mepcolinux sem1]$./togcaseout
Enter a string:HELLO
Using library function
hello
Without using library function
hello
