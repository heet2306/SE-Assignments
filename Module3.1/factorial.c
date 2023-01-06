#include<stdio.h>
int main()
{
	double num,i,facto=1;
	printf("Enter A Number =");
	scanf("%lf",&num);
	for (i=1;i<=num;i++)
	{
		facto=facto*i;
	}
		printf("Factorial Of %lf is %lf",num,facto);
		return 0;
}
