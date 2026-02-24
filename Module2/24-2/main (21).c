#include<stdio.h>
#include<conio.h>

int main()
{   
    int num;
    
    printf("\n Enter 1 For English \n Enter 2 For Hindi \n Enter 3 For Gujarati");
    scanf("%d",&num);
    
    if(num==1)
    {
       printf("Language is English"); 
    }
    else if(num==2)
    {
        printf("Language is Hindi"); 
    }
    else if(num==3)
    {
        printf("Language is Gujarati"); 
    }
    else
    {
        printf("Number Not Valid"); 
    }
    
    
    return 0;
}
