#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
	char ch[20] ="yogi";
	char ch2[20]="YASH";
	char ch3[20]="Pratik";
	float f2 = 45.45;

	clrscr();

	printf("\n %s",strupr(ch));
	printf("\n %s",strlwr(ch2));
	printf("\n %s",strrev(ch3));
	printf("\n %f",abs(f2));


	getch();
}