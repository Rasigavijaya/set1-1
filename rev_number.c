#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,r,sum=0;
 scanf("%d",&n);
 while(n>0)
 {
  r=n%10;
  sum=sum*10+r;
  n=n/10;
 }
 printf("%d",sum);
 getch();
 }
