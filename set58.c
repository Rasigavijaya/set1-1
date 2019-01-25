#include<stdio.h>
void main()
{
 int a[30],i,sum=0,avg,n;
 scanf("%d"&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",a[i]);
  sum=sum+a[i];
 }
 avg=sum/n;
 printf("%d",avg);
 }
