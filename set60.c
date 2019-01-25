#include<stdio.h>
int main()
{
    int num;
    int tempNum,flag;
     
    printf("Enter an integer number: ");
    scanf("%d",&num);
     
    tempNum=num;
    flag=0;
    /*check power of two*/
    while(tempNum!=1)
    {
        if(tempNum%2!=0){
            flag=1;
            break;
        }
        tempNum=tempNum/2;
    }
  
    if(flag==0)
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
      
    return 0;
}
