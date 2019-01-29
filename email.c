#include<stdio.h>
#include<conio.h>
void main()
{
 char a[100],b[50]=".com";
 int i,j,k,p=0,c=0,c1=0,c2=0;
 clrscr();
 scanf("%[^\n]s",&a);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]=='@')
  {
    for(j=a[i+1];a[j]!='.';j++)
    {
     c1++;
    }
    for(k=a[j+1];a[k]!='\0';k++)
    {
     if(a[k]==b[p])
     {
     p++;
     c2++;
     }
  }
  break;
  }
  else
  {
  c++;
  }
 }
 if(c>=3 && c1>=5 && c2==4 )
 {
   printf("valid");
  }
  else
  {
   printf("not valid");
  }
 getch();
}
