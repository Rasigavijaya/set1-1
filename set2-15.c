#include<stdio.h>
#include<conio.h>
void main()
{
 int n,m,i,j,c[20];
 clrscr();
 scanf("%d%d",&n,&m);
 j=0;
 for(i=n;i<=m;i++)
 {
  if(i%2==0)
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
