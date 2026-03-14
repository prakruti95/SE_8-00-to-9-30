#include <stdio.h>

int main()
{
    int i,j,num=2;
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf("%d",num);
            
        }
        num=num+2;
        printf("\n");
      
    }

    return 0;
}
