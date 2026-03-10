#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    int max=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem = num % 10;
        
        if(rem>max)
        {
            max = rem;
        }
        
        num= num/10;
    }
    
    printf("Biggest Digit is %d ",max);

    return 0;
}