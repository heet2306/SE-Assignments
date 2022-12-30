#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a=");
	scanf("%d",&a);
	printf("Enter the value of b=");
	scanf("%d",&b);
	if (a>b)
	{
		printf("a is greater then b %d",a);
	}
	 else if (a<b)
	{
		printf("b is greater then a %d",b);
	}
	else
	{
		printf("both are equal  %d",a,b);
	}
	return 0;


}
