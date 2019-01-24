#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50];
 int i;
 clrscr();
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]>=48 && a[i]<57=)
  {
   printf("yes");
  }
  else
  {
   printf("No");
  }
 }
 getch();
}
