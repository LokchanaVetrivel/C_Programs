[24bcs031@mepcolinux sem1]$./circleoutcat circlemakecat toggle.h
#include<stdio.h>
int upper(int ch);
int lower(int ch);
[24bcs031@mepcolinux sem1]$cat toggle.heimp.c
#include"toggle.h"
char toggle(char ch){
   if(ch>='A' && ch<='Z'){
   ch =ch+32;
   return ch;
   }
   else if(ch>='a' && ch<='z'){
   ch=ch-32;
   return ch;
   }
   else{
      return ch;
   }
}
[24bcs031@mepcolinux sem1]$cat toggleimp.capp.c
#include"toggle.h"
int main()
{
   int i,n;
   char tog,ch;
   printf("Enter the number of characters:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      printf("Enter a character:");
         scanf(" %c",&ch);
      tog=toggle(ch);
      printf("Toggled character:%c\n",tog);
   }
   return 0;
}
[24bcs031@mepcolinux sem1]$cat toggleapp.cmake
toggleout: toggleimp.o toggleapp.o
        cc toggleimp.o toggleapp.o -o toggleout
toggleimp.o: toggleimp.c toggle.h
        cc -c toggleimp.c
toggleapp.o: toggleapp.c toggle.h
        cc -c toggleapp.c
[24bcs031@mepcolinux sem1]$cat togglemake./tohggleout
Enter the number of characters:2
Enter a character:h
Toggled character:H
Enter a character:i
Toggled character:I
[24bcs031@mepcolinux sem1]$./toggleout
Enter the number of characters:5
Enter a character:H
Toggled character:h
Enter a character:E
Toggled character:e
Enter a character:L
Toggled character:l
Enter a character:L
Toggled character:l
Enter a character:O
Toggled character:o
