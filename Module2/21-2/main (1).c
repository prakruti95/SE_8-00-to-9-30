#include<stdio.h>
#include<conio.h>
void main()
{   
    //data_type variable = value;
    int pri = 50000; 
    float roi = 6.7;
    int year = 2;
    
    float intrest = pri*roi*year/100;
    
    float total = pri+intrest;
    
    printf("Your Final Amount is : %f",total);
    
    
    getch();
}
