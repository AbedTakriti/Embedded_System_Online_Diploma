#include "stdio.h"

void main()

{

	int x=0;
	int i=0;
	int sum=0;
	printf("Enter an integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	for (i=0;i<=x;i++)
	{

		sum=sum+i;
	}

	printf("Sum = %d", sum);
}

