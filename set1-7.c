#include<stdio.h>
#include<conio.h>
void main()
{
 char a[10];
 int n,i;
 clrscr();
 printf("Enter your string");
 scanf("%s",&a);
 printf("How many times repeated");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("%s",a);
 }
 getch();
 }
