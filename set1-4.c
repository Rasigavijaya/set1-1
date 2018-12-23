#include<stdio.h>
#include<conio.h>
void  main()
{
 char a;
 clrscr();
 printf("Enter your charctor");
 scanf("%d",&a);
 if(('A'<=a) && (a>='z'))
 {
  printf("Alphabet");
 }
 else
 {
  printf("Invalid");
 }
 getch();
 }
