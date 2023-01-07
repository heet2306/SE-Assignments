#include<stdio.h>
int  main()
{
	int n,i;
	int ecount=0;
	int ocount=0;
	
	int esum;
	int osum;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter Number =");
		scanf("%d",&n);
		
		if(n%2==0)
		{
			ecount+=1;
			esum+=n;
		}
		else
		{
			ocount+=1;
			osum+=n;
		}
	}
	printf("\n Even Count =%d",ecount);
	printf("\n Odd Count =%d",ocount);
	
	printf("\n Even Sum =%d",esum);
	printf("\n Odd Sum =%d",osum);
}
