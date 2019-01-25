#include<stdio.h>
void main()
{
 char a[50],b[50],c[50];
 int i,j=0;
 gets(a);
 gets(c);
 for(i=0;a[i]!='\0';i++)
 {
   b[j]=a[i];
   j++
 }
 for(i=0;c[i]!='\0';i++)
 {
   b[j]=a[i];
   j++
 }
  b[j]='\0';
  printf("%s",b);
  }
