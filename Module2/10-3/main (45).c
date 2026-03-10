#include<stdio.h>
#include<conio.h>
int main()
{
    int num,fd;
  
    printf("Enter Number: ");
    scanf("%d",&num);
    
    int ld = num % 10;
    
   while(num>0)
   {
       if(num>9)
       {
           num = num/10;
       }
       else
       {
           fd = num;
           num = num/10;
       }
   }
   
   int ans = fd+ld;
   printf("%d",ans);
    
    
   

    return 0;
}