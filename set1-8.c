#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,sum=0;
 clrscr();
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   sum=sum+i;
 }
 printf("answer is:%d",sum);
 getch();
 }
