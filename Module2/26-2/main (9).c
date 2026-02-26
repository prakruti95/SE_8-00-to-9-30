#include<stdio.h>
#include<conio.h>

int main()
{
  
   char c;
   printf("Enter Alphabet");
   scanf("%c",&c);
   
   if(c=='a'|| c=='e' || c=='i'|| c=='o' || c=='u')
   {
       printf("It's a vowel");
   }
  
   else
   {
       printf("It's a consonant");
   }
   
   
  // printf("Your Alphabet is %c",c);
    
    
    return 0;
}