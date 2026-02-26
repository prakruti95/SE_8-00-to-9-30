#include<stdio.h>
#include<conio.h>

int main()
{
    int a=17;
    int b=14;
    int c=15;
    
   if(a>b && a>c)
   {
       printf("A is bigger");
   }
   else if(b>a && b>c)
   {
       printf("B is bigger");
   }
   else
   {
       printf("C is bigger");
   }
    
    return 0;
}