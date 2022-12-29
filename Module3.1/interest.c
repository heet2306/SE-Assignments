#include<stdio.h>
int main()
{
	float p,r,n,interest; 
	printf("Enter The Amount =");
	scanf("%f",&p);
	printf("Enter The Rate =");
	scanf("%f",&r);
	printf("Enter The Time =");
	scanf("%f",&n);
	interest=(p*r*n)/100;
	printf("Simple Interest=%f",interest);
	return 0;
}
