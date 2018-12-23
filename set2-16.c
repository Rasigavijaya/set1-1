#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,i,j;
 clrscr();
 scanf("%d%d",&a,&b);
 for(i=a;i<=b;i++)
 {
  for(j=2;j<=i/2;j++)
  {
   if(i%j!=0)
   {
    printf("%d",i);
    break;
   }
   else
   {
    break;
   }
  }
 }
 getch();
 }
