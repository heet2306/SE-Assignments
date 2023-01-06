#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter The value Of A =");
	scanf("%f",&a);
	
	printf("Enter The value Of B =");
	scanf("%f",&b);
	
		c=a;
		a=b;
		b=c;
		
	printf("After Swaping Value = a%f\n",a);
	printf("After Swaping Value = b%f",b);
	
}
