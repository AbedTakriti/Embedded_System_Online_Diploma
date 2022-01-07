
#include "stdio.h"

void main()

{
	float x=0,y=0,z=0;
	char op;
	printf("Choose an operator (+ , - , * , / ) : ");
	fflush(stdin);
	fflush(stdout);

	scanf("%c",&op);
	printf("Enter two operands respectively (a,b) : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);


	switch(op)
	{
	case'+':
	{
		z=x+y;
		break;
	}
	case'-':
	{
		z=x-y;
		break;
	}
	case'*':
	{
		z=x*y;
		break;
	}
	case'/':
	{
		if(y==0)
			printf("Error! undefined division\n");
		else
			z=x/y;
		break;
	}
	default:
		printf("wrong operation choice");
		break;
	}
	printf("%f %c %f = %f\n",x,op,y,z);
}
