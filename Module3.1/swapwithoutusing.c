#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter Value Of A =");
	scanf("%f",&a);
	printf("Enter Value Of B =");
	scanf("%f",&b);	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After Swap Value a= %f\n",a);
	printf("After Swap Value  b= %f",b);
	
	return 0;
}
