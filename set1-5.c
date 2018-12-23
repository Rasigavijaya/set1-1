#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 printf("Enter your three numbers");
 scanf("%d%d%d",&a,&b,&c);
 if((a>b) && (a>c))
 {
  printf("%d",a);
 }
 if((b>a) && (b>c))
 {
  printf("%d",b);
 }
 if((c>a) && (c>b))
 {
  printf("%d",c);
 }
 getch();
 }
