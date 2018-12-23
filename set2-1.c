#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,p=1;
 clrscr();
 scanf("%d%d",&a,&b);
 while(b!=0)
 {
  p=a*p;
  b--;
 }
 printf("%d",p);
 getch();
 }
