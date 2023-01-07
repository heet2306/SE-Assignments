#include<stdio.h>
int main()
{
	double n,i;
	printf("Enter The Number =");
	scanf("%lf",&n);
	for(i=1;i<=10;i++)
	{
		printf("%lf * %lf = %lf \n",n,i,n*i);
	}
	return 0;
}
