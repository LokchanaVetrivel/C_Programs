[24bcs031@mepcolinux sem1]$cat counthead.h
#include<stdio.h>
#include<string.h>
void alphabet(char str[]);
void number(char str[]);
void special(char str[]);

[24bcs031@mepcolinux sem1]$cat countimp.c
#include"counthead.h"
void alphabet(char str[]){
   int i,alpha=0;
   for(i=0;str[i]!='\0';i++){
      if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')){
         alpha++;
      }
   }
   printf("No of alphabets:%d\n",alpha);
}
void number(char str[]){
   int num=0,i;
   for(i=0;i<=str[i]!='\0';i++){
      if((str[i]<='9') && (str[i]>='0')){
         num++;
      }
   }
   printf("No of digits:%d\n",num);
}
void special(char str[]){
   int count=0,i;
   for(i=0;str[i]!='\0';i++){
      if(!(( ((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z'))||((str[i]<='9')&&(str[i]>='0'))))){
         count++;
      }
   }
   printf("No of special characters:%d\n",count);
}
[24bcs031@mepcolinux sem1]$cat countapp.c
#include"counthead.h"
int main(){
   char str[50];
   int alphabets=0,digit=0,punctuation=0,controlchar=0;
   printf("Enter a sring:");
   scanf("%s",str);
   printf("**Without using library functions**\n");
   alphabet(str);
   number(str);
   special(str);
   printf("**Using library function**\n");
   int i;
   for(i=0;str[i]!=0;i++){
      if(isalpha(str[i])){
            alphabets++;
     }
      else if(isdigit(str[i])){
         digit++;
      }
      else{
         punctuation++;
      }
   }
   printf("No of alphabets:%d\n",alphabets);
   printf("No of digits:%d\n",digit);
   printf("No of special characters:%d\n",punctuation);
   return 0;
}

[24bcs031@mepcolinux sem1]$cat countmake
countout:countimp.o countapp.o
        cc countimp.o countapp.o -o countout
countimp.o:countimp.c counthead.h
        cc -c countimp.c
countapp.o:countapp.c counthead.h
        cc -c countapp.c

[24bcs031@mepcolinux sem1]$./countout
Enter a sring:hello everyone
**Without using library functions**
No of alphabets:5
No of digits:0
No of special characters:0
**Using library function**
No of alphabets:5
No of digits:0
No of special characters:0
[24bcs031@mepcolinux sem1]$./countout
Enter a sring:1234Students
**Without using library functions**
No of alphabets:8
No of digits:4
No of special characters:0
**Using library function**
No of alphabets:8
No of digits:4
No of special characters:0
