#include<stdio.h>
void main()
{
 int n,i,f1=0,f2=1,f3,a[20];
 scanf("%d",&n);
 printf("%d",f1);
 printf("%d",f2);
 for(i=0;i<n;i++)
 {
  f3=f1+f2;
  f1=f2;
  f2=f3;
  a[i]=f3;
 }
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
}
}
 
