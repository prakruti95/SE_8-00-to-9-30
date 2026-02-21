#include<stdio.h>
#include<conio.h>
void main()
{  
    //0.5*a*b
    
    int a,b;
    float c = 0.5;
    
    printf("Enter Value for a: ");
    scanf("%d",&a);
    
    printf("Enter Value for b: ");
    scanf("%d",&b);
    
    float ans = c*a*b;
    
    printf("Area of Triangle is %f",ans);
    
    
    
    getch();
}
