#include<stdio.h>

main()
{
	int a=1,n;
	printf("Enter Number=");
	scanf("%d",&n);
	do
	{
		printf("%d\n",a);
		a++;
	}while(a<=n);
}
