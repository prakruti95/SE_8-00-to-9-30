#include<stdio.h>
#include<conio.h>
int main()
{
    int num,fact=1;
  
    printf("Enter Number: ");
    scanf("%d",&num);//5
    
    for(int i=1;i<=num;i++)
    {
        fact = fact*i;//1//2//6////120
    }
    
    printf("%d",fact);
    
    
  
   

    return 0;
}