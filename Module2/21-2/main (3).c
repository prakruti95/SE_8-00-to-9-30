#include<stdio.h>
#include<conio.h>
void main()
{  
    int pri; 
    float roi;
    int year;
    
    printf("Enter Principle Amount");
    scanf("%d",&pri);
    
    printf("Enter ROI");
    scanf("%f",&roi);
    
    printf("Enter Years");
    scanf("%d",&year);
    
    float intrest = pri*roi*year/100;
    
    float total = pri+intrest;
    
    printf("Your Final Amount is : %f",total);
    
    
    getch();
}
