#include<stdio.h>
#include<conio.h>
void main()
{
 int n,m,i,j,temp,temp1,p=1,count=0,c,rem;
 clrscr();
 scanf("%d%d",&n,&m);
 for(i=n;i<=m;i++)
 {
  temp=i;
  temp1=i;
  while(i>0)
  {
   i=i/10;
   count++;
  }
  i=temp;
  while(i!=0)
  {
    rem=i%10;
    while(count>0)
    {
     p=p*rem;
     count--;
    }
    sum=sum+p;
    c=count;
    i=i/10;
    p=1;
   }
   if(sum==temp1)
   {
    printf("%d is Armstrong",temp1);
   }
   i=temp1;
   sum=0;
   rem=0;
   }
   getch();
   }
   
