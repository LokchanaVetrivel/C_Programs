[24bcs031@mepcolinux sem1]$cat studenthead.h
#include<stdio.h>
#include<string.h>
void swap(char str1[],char str2[]);
void sortstudents(char names[][50],int n);

[24bcs031@mepcolinux sem1]$cat studentimp.c
#include"studenthead.h"
void swap (char str1[],char str2[]){
     char temp[50];
     strcpy(temp,str1);
     strcpy(str1,str2);
     strcpy(str2,temp);
}
void sortstudent(char names[][50],int n){
   int i,j;
   for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(names[i],names[j])>0){
            swap(names[i],names[j]);
          }
      }
   }
}

[24bcs031@mepcolinux sem1]$cat studentapp.c
#include"studenthead.h"
int main(){
   int i,n;
  // int rollno[50];
   char names[50][50];
   printf("Enter the no of students:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    //  printf("Enter the roll number for student %d:",i+1);
    //  scanf("%d",&rollno[i]);
      printf("Enter the name for student %d:",i+1);
      scanf("%s",names[i]);
   }
   sortstudent(names,n);
   printf("Sorted list\n");
 //  printf("Name      Rollno");
   for(i=0;i<n;i++){
      printf("Rollno:%d Name: %s\n",i+1,names[i]);
   }
   return 0;
}
[24bcs031@mepcolinux sem1]$cat studentmake
studentout:studentimp.o studentapp.o
        cc studentimp.o studentapp.o -o studentout
studentimp.o:studentimp.c studenthead.h
        cc -c studentimp.c
studentapp.o:studentapp.c studenthead.h
        cc -c studentapp.c

[24bcs031@mepcolinux sem1]$./studentout
Enter the no of students:3
Enter the name for student 1:Alice
Enter the name for student 2:Robert
Enter the name for student 3:Joseph
Sorted list
Rollno:1 Name: Alice
Rollno:2 Name: Joseph
Rollno:3 Name: Robert
[24bcs031@mepcolinux sem1]$./studentout
Enter the no of students:4
Enter the name for student 1:Kenny
Enter the name for student 2:Zen
Enter the name for student 3:Tarzan
Enter the name for student 4:Danniel
Sorted list
Rollno:1 Name: Danniel
Rollno:2 Name: Kenny
Rollno:3 Name: Tarzan
Rollno:4 Name: Zen
