#include<stdio.h>
#include<conio.h>
void main()
{
 int y;
 clrscr();
 printf("Enter your year:");
 scanf("%d",&y);
 if((y%4==0) && (y%100!=0) || (y%400==0))
 {
  printf("leap year");
 }
 else
 {
  printf("is not leap year");
 }
 getch();
 }
