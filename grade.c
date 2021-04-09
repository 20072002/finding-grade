#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter your mark:");
	scanf("%d",&a);
	if(a>=85&&a<=100)
	{
		printf("GRADE A");
	}
	else if(a>=70&&a<85)
	{
		printf("GRADE B");
	}
	else if(a>=55&&a<70)
	{
		printf("GRADE C");
	}
	else if(a>=40&&a<55)
	{
		printf("GRADE D");
	}
	else
	{
		printf("GRADE E");
	}
	getch();
}
