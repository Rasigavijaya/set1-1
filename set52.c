#include<stdio.h>
void main()
{
 char a[50],b[50];
 int i,c=0,c1=0;
 gets(a);
 gets(b);
 for(i=0;a[i]!='\0';i++)
 {
  c++;
 }
 for(i=0;b[i]!='\0';i++)
 {
  c1++;
 }
 if(c>=c1)
 {
  printf("%s",a);
 }
 else
 {
  printf("%s",b);
 }
 }
