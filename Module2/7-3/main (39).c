#include <stdio.h>

int main()
{
    
    int num=1234;
    int sum=0;
    printf("Enter Your Number");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem = num % 10;
        sum+=rem;
        num=num/10;
    }
    
    printf("sum of all digits are: %d ",sum);
    
    
    
    
    return 0;
}
