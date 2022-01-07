
#include "stdio.h"

void main()

{
	int y=0;
	int x=0;
	int i=0;
	int fac=1;
	for(y=0;y<2;y++){
	printf("Enter an integer : ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d",&x);
	if(x<0)
		printf("Error! factorial of negative numbers doesnt exist\n");
	else
	{
	for (i=x;i>=1;i--)
	{
		fac =fac*i;
	}

	printf("factorial is = %d", fac);
}}}

