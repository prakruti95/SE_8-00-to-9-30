#include<stdio.h>
#include<conio.h>
int main()
{
   int maths,sci,hin,guj,eng,total=0;
   float per;
   
   printf("Enter Your Marks For Maths");
   scanf("%d",&maths);
   
   printf("Enter Your Marks For Science");
   scanf("%d",&sci);
   
   printf("Enter Your Marks For Hindi");
   scanf("%d",&hin);
   
   printf("Enter Your Marks For Gujarati");
   scanf("%d",&guj);
   
   printf("Enter Your Marks For English");
   scanf("%d",&eng);
   
   total = maths+sci+hin+guj+eng;
   
   printf("\n Your Total is %d ",total);
   
   per = total/5;
   
   printf("\n Your Percentage is %f ",per);
   
   if(per>=70 && maths>=35 && sci>=35 && hin>=35 && guj>=35 && eng>=35)
   {
       printf("\n A Grade");
   }
   else if(per>=60 && maths>=35 && sci>=35 && hin>=35 && guj>=35 && eng>=35)
   {
       printf("\n B Grade");
   }
   else if(per>=50 && maths>=35 && sci>=35 && hin>=35 && guj>=35 && eng>=35)
   {
       printf("\n C Grade");
   }
   else if(per>=40 && maths>=35 && sci>=35 && hin>=35 && guj>=35 && eng>=35)
   {
       printf("\n D Grade");
   }
   else
   {
        printf("\n Fail");
   }
   
   
    
    
    return 0;
}