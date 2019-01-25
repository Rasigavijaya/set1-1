#include<stdio.h>
void main()
{
 char a[50],b[50];
 int i,j=0;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]!=" ")
  {
   b[j]=a[i];
   j++
  }
  else
  {
  i++;
  }
  b[j]='\0';
  printf("%s",b);
  }
