#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rem,count=0,c,temp,sum=0,p=1,temp1;
 clrscr();
 scanf("%d",&n);
 temp=n;
 temp1=n;
 while(n!=0)
 {
  n=n/10;
  count++;
 }
 c=count;
 n=temp
 while(n!=0)
 {
   rem=n%10;
   while(count>0)
   {
    p=p*rem;
    count--;
   }
   sum=sum+p;
   n=n/10;
   count=c;
   p=1;
  }
  if(sum==temp1)
  {
   printf("Armstrong");
  }
  else
  {
   printf("not Armstrong");
  }
  getch();
  }
  
