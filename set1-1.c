#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter your number");
  scanf("%d",&a);
  if(a>0)
  {
   printf("This number is positive");
  }
  if(a<0)
  {
    printf("This number is negative");
  }
  if(a==0)
  {
   printf("This number is zero");
  }
  getch();
 
