[24bcs031@mepcolinux sem1]$cat 8celsius.c
#include<stdio.h>
union Temperature{
   float celsius;
   float fahrenheit;
};
int main()
{
   union Temperature temp;
   printf("Enter the temperature in celsius: ");
   scanf("%f",&temp.celsius);
   temp.fahrenheit=(temp.celsius*9/5)+32;
   printf("Temperature in Fahrenheit:%.2f\n",temp.fahrenheit);
   return 0;
}
[24bcs031@mepcolinux sem1]$cc 8celsius.c
[24bcs031@mepcolinux sem1]$./a.out
Enter the temperature in celsius: 34
Temperature in Fahrenheit:93.20
[24bcs031@mepcolinux sem1]$./a.out
Enter the temperature in celsius: 45
Temperature in Fahrenheit:113.00
[24bcs031@mepcolinux sem1]$exit
