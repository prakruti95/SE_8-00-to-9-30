#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    int i,j;
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            num++;
            printf("%d",num);
        }
        printf("\n");
    }
   

    return 0;
}
