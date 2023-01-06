#include<stdio.h>
int main ()
{
	int num1,num2,add,sub,div,mul,mod;
	printf ("Enter the number 1 - ");
	scanf("%d",&num1);
	
	printf ("Enter the number 2 - ");
	scanf("%d",&num2);
	 
	add=num1+num2;
	sub=num1-num2;
	div=num1/num2;
	mul=num1*num2;
	mod=num1%num2;
	
	printf("Addition Of Number %d",add);
	printf("\nSubstration Of Number %d",sub);
	printf("\nDivition Of Number %d",div);
	printf("\nmultiplication Of Number %d",mul);
	printf("\nModulo Of Number %d",mod);
	
	
}
