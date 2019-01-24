#include<stdio.h>
void main();
{
 char a[50];
 int i,c=0;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]!=48 && a[i]!=57 && a[i]!='A' && a[i]!='Z' && a[i]!='a' && a[i]!='z')
  {
  c++;
  }
 }
 printf("%d",c);
 }
