#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    
    printf("\n Press 1 For English \n Press 2 For Hindi \n Press 3 For Gujarati");
    scanf("%d",&num);//1
    
    switch(num)
    {
        case 1:printf("Your Language is English");
        break;
        
        case 2:printf("Your Language is Hindi");
        break;
        
        case 3:printf("Your Language is Gujarati");
        break;
        
        default:printf("Your Number is not valid");
        break;
        
    }
    
    
    
    return 0;
}