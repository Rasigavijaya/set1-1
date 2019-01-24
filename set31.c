#include<stdio.h>
#include<conio.h>
void main()
{
 int n,n1,n2,i,sum=0,x,y;
 clrscr();
 scanf("%d%d%d",&n,&n1,&n2);
 x=n;
 y=n+n1+n2;
 for(i=x;i>=0;i--)
 {
  n=n-1;
  n1=n1-1;
  n2=n2-1;
  if(n>=0 && n1>=0 && n2>=0)
  {
   sum=sum+(n+n1+n2);
  }
 }
 printf("%d",sum+y);
 getch();
}
