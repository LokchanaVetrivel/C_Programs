[24bcs031@mepcolinux sem1]$cat stringhead.h
#include<stdio.h>
#include<string.h>
int searchchar(char str[],char chr);
void concatenate(char str1[],char str2[]);
int occurances(char str[],char chr);
void palindrome(char str1[]);
[24bcs031@mepcolinux sem1]$cat stringimp.c
#include"stringhead.h"
int searchchar(char str[],char chr){
   int i,j;
   for(i=0;str[i]!='b';i++){
      if(chr==str[i]){
         return i;
      }
   }
   return -1;
}
void concatenate(char str1[],char str2[]){
   int i=0,j=0;
   while(str1[i]!='\0'){
      i++;
   }
   while(str2[j]!='\0'){
      str1[i]=str2[j];
      i++;
      j++;
   }
   str1[i]='\0';
   printf("Concatenated string is:%s",str1);
}
int occurances(char str[],char chr){
   int i,count=0;
   for(i=0;str[i]!='\0';i++){
      if(str[i]==chr){
         count++;
      }
   }
   return count;
}
void palindrome(char str1[]){
   char orig[50];
   int temp;
   strcpy(orig,str1);
   int i,n=strlen(str1);
   for(i=0;i<n/2;i++){
      temp=str1[i];
      str1[i]=str1[n-1-i];
      str1[n-1-i]=temp;
   }
   if(strcmp(orig,str1)==0){
      printf("The string is palindrome.\n");
   }
   else{
      printf("Its not a palindrome.\n");
   }
}
[24bcs031@mepcolinux sem1]$cat stringapp.c
 #include"stringhead.h"
int main()
{
   int choice=0;
   do{printf("\nMENU\n1.To search a character and report its position\n2.Concatenate\n3.No of occurances of a character\n4.Palindrome or not\n5.Exit");
      printf("\nEnter your choice\n");
      scanf("%d",&choice);
      switch(choice){
         case 1:{
            char chr,str[50];
            printf("Enter the string :");
            scanf("%s",str);
            printf("please Enter the character to be searched:");
            scanf(" %c",&chr);
            printf("Without using in built function\n");
            int result=searchchar(str,chr);
            if(result!=-1){
               printf("The character found at position:%d",result+1);
            }
            else{
               printf("The character not found.\n");
            }
            break;
         }
         case 2:{
            char str1[50],str2[50];
            printf("Enter 1st string:");
            scanf("%s",str1);
            printf("Enter 2nd string:");
            scanf("%s",str2);
            concatenate(str1,str2);
            break;
          }
         case 3:{
            char ch,str[50];
            printf("Enter the string:");
            scanf("%s",str);
            printf("Enter the character:");
            scanf(" %c",&ch);
            int result=occurances(str,ch);
            printf("%c occurs %d times",ch,result);
            break;
        }
         case 4:{
            char str[50];
            printf("Enter the string:");
            scanf("%s",str);
            palindrome(str);
            break;
         }
         case 5:
            printf("Exiting..\n");
            break;
         default:
            printf("Invalid choice.Try again!!\n");
            break;
     }
    }while(choice!=5);
   return 0;
}
[24bcs031@mepcolinux sem1]$cat stringmake
stringhead: stringimp.o stringapp.o
        cc stringimp.o stringapp.o -o stringhead
stringimp.o:stringimp.c stringhead.h
        cc -c stringimp.c
stringapp.o:stringapp.c  stringhead.h
        cc -c stringapp.c
[24bcs031@mepcolinux sem1]$./stringhead

MENU
1.To search a character and report its position
2.Concatenate
3.No of occurances of a character
4.Palindrome or not
5.Exit
Enter your choice
1
Enter the string :Thiru
please Enter the character to be searched:i
Without using in built function
The character found at position:3
MENU
1.To search a character and report its position
2.Concatenate
3.No of occurances of a character
4.Palindrome or not
5.Exit
Enter your choice
2
Enter 1st string:Thiru
Enter 2nd string:lokchana
Concatenated string is:Thirulokchana
MENU
1.To search a character and report its position
2.Concatenate
3.No of occurances of a character
4.Palindrome or not
5.Exit
Enter your choice
4
Enter the string:thiru
Its not a palindrome.

MENU
1.To search a character and report its position
2.Concatenate
3.No of occurances of a character
4.Palindrome or not
5.Exit
Enter your choice
5
Exiting..
