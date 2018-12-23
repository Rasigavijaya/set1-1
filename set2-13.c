#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 scanf("%d",n);
 for(i=2;i<n;i++)
 {
  if(n%i!=0)
  {
   printf("prime");
   break;
  }
  else
  {
   printf("not prime");
   break;
  }
 }
 getch();
 }
   
