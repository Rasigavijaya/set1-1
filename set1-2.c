#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter your number");
 scanf("%d",&n);
 if(n%2==0)
 {
  printf("even");
 }
 else if(n%2!=0)
 {
  printf("odd");
 }
 else
 {
  printf("Invalid input");
 }
 getch();
 }
