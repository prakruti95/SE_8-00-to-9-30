#include<stdio.h>
#include<conio.h>

//with parameter without return type
void add(int a,int b)
{
    int c = a+b;
    printf("%d",c);
}

int main()
{
    add(6,3);
    
    return 0;
}