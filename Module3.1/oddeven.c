#include<stdio.h>
int main()
{
	int num;
	printf("Enter The Value Of Num =");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Number Is Even ",num);
	}
	else
	{
			printf("Number Is Odd ",num);
	}
	return 0;
}
