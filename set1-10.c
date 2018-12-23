#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,rem,sum=0;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 while(n!=0)
 {
  rem=n%10;
  sum++;
  n=n/10;
 }
 printf("%d",sum);
 getch();
 }
