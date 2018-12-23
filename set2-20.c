#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,c[20];
 clrscr();
 scanf("%d",&n);
 for(i=1;i<5;i++)
 {
  m=i*n;
  c[i]=m;
 }
 for(i=1;i<=5;i++)
 {
  printf("%d\t",c[i]);
 }
 getch();
 }
