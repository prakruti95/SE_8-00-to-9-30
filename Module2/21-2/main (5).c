#include<stdio.h>
#include<conio.h>
void main()
{  
    int a= 7;
    int b= 8;
    int c= 7;
    
    //right ->1
    //wrong ->0
    
    int a1 = a<b;
    printf("\n %d",a1);
    
    int a2 = a>b;
    printf("\n %d",a2);
    
    int a3 = (a==c);
    printf("\n %d",a3);
    
    int a4 = (a!=c);
    printf("\n %d",a4);
     
     int a5 = a<=c;
     printf("\n %d",a5);
     
      int a6 = a>=c;
     printf("\n %d",a6);
     
     
     
    getch();
}






