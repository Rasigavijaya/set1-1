#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],i,min,n;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 a[0]=min;
 for(i=0;i<n;i++)
 {
  if(a[i]<min)
  {
   min=a[i];
  }
 }
 printf("%d",min);
 getch();
}
