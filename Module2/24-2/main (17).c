#include<stdio.h>
#include<conio.h>

int main()
{
    int pizza = 100;
    int burger = 70;
    int coffee = 120;
    int total = 0;
    
    total+=pizza;
    total+=burger;
    total+=coffee;
    total+=pizza;
    total+=burger;
    total+=coffee;
    printf("Total is %d",total);
    
    if(total>500)
    {
        printf("Discount Applied");
    }
    else
    {
        printf("No  Discount");
    }
    
  
    return 0;
}
