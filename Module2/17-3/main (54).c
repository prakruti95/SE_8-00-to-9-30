#include<stdio.h>
#include<conio.h>

int main() 
{
    int i,j,value=65;
    
    for(i=1;i<=5;i++)
    {
       
        for(j=1;j<=i;j++)
        {
            
            printf("%c",value);
        }
        value++;
        printf("\n");
    }
    
    return 0;
}
