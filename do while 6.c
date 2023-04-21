#include<stdio.h>

main()
{
	int n,a=1;
	printf("Enter Number=");
	scanf("%d",&n);
	
	do
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
		n--;
	}while(n>=a);
}
