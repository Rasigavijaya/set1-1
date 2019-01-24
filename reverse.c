#include<stdio.h>
#include<conio.h>
void main();
{
 char a[50],b[50];
 int count=0,i,j;
 clrscr();
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  count++;
 }
 j=0;
 for(i=count;i>=0;i--)
 {
  b[j]=a[i];
  j++;
 }
 printf("%s",b);
 getch();
 }
