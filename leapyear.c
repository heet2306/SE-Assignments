#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year =");
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("This Year Is  Leap Year=%d",year);
	}
	else
	{
		printf("This Year Is Not Leap Year=%d",year);
	}
	return 0;
}

