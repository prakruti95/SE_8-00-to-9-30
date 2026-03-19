#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ch[50] = "tops";
    char ch2[50];
    
    strcpy(ch2,ch);
    
    printf("%s",ch2);

    return 0;
}