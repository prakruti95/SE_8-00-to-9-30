#include <stdio.h>

int main()
{
    int i,j,num;
    
    for(i=1;i<=3;i++)
    {
        if(i==1)
           num=2;
        else if (i==2)
          num=4;
        else
          num=16;
        
        for(j=1;j<=i;j++)
        {
            
           printf("%d ",num);
            
        }
        
        printf("\n");
      
    }

    return 0;
}
