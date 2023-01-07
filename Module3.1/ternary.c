#include<stdio.h>
int main()
{
	int num;
	printf("Enter The Number = ");
	scanf("%d",&num);
	
	num%2 == 0 ? printf("Number Is Even") : printf("Number Is Odd");
	
	return 0;
}


