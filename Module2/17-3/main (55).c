#include<stdio.h>
#include<conio.h>

int main() 
{
    int i,j,value=64;
    
    for(i=1;i<=5;i++)
    {
       
        for(j=1;j<=i;j++)
        {
            value++;
            printf("%c",value);
        }
        
        printf("\n");
    }
    
    return 0;
}
