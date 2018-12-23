#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c[20],i,j;
 clrscr();
 scanf("%d%d",&a,&b);
 j=0;
 for(i=a;i<=b;i++)
 {
  if(i%2!=0)
  {
   c[j]=i;
   j++;
  }
 }
 for(i=0;c[i]!='\0';i++)
 {
  printf("%d",c[i]);
 }
 getch();
 }
