#include<stdio.h>
void main()
{
 int n,c=0,r;
 scnaf("%d",&n);
 while(n>0)
 {
  r=n%10;
  c++;
  n=n/10;
 }
 printf("%d",c);
}
