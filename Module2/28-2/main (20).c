#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    
    printf("\n Press 1 For English \n Press 2 For Hindi \n Press 3 For Gujarati");
    scanf("%d",&num);//1
    
    if(num==1)
    {
        printf("Your Language is English");
    }
    else if(num==2)
    {
        printf("Your Language is Hindi");
    }
    else if(num==3)
    {
        printf("Your Language is Gujarati");
    }
    else
    {
        printf("Your Number is not valid");
    }
   
    
    
    
    
    return 0;
}