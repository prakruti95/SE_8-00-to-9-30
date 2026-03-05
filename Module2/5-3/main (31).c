#include <stdio.h>

int main()
{
    int i,num;
    
    printf("Enter Any Number");
    scanf("%d",&num);
    
    for(i=1;i<=10;i++)
    {
        int ans = num*i;
        printf("\n %d * %d = %d",num,i,ans);
    }
    
    return 0;
}
