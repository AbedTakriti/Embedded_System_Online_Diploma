#include "stdio.h"

void main()

{

	int i=0,x=0;


	for(i=0;i<2;i++)
	{
		printf("Enter an integer you want to check: ");
		fflush(stdin);
			fflush(stdout);
	scanf("%d",&x);
	if (x%2 ==0)
		printf("%d is even\n",x);
	else
		printf("%d is odd\n",x);
	}

}

