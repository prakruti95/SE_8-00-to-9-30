#include <stdio.h>

int main()
{
    int i;
    
    for(i=1;i<=10;i++)
    {
        
       if(i%2==0)
       {
          printf("\n Number is Even %d ",i); 
       }
       else
       {
            printf("\n Number is Odd %d ",i); 
       }
    }
    
    return 0;
}
