#include<stdio.h>
#include<conio.h>

//with para with return type
int add(int a,int b)
{
    return a+b;
}

int main()
{
    int a = 6;
    int b = 3;
    
    int ans = add(a,b);
    printf("%d",ans);
  
    
    return 0;
}