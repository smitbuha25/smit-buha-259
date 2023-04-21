#include<stdio.h>

main()
{
	int a=1,n;
	printf("Enter Number=");
	scanf("%d",&n);
	
	do
	{
		if(a%2==1)
		{
			printf("%d\n",a);
		}
		a++;
	}while(a<=n);
}

