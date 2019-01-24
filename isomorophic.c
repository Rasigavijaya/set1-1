#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50],b[50];
 int i,c=0,c1=0;
 clrscr();
 gets(a);
 gets(b);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==a[i+1])
  {
   c++;
  }
 }
 for(i=0;b[i]!='\0';i++)
 {
  if(b[i]==b[i+1])
  {
   c1++;
  }
 }
 if(c==c1)
 {
 printf("yes");
 }
 else
 {
 printf("No");
 }
 getch();
 }
