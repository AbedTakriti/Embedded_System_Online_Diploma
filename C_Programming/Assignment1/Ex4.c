#include "stdio.h"

void main()

{

	float x=0,y=0;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	printf("product: %f",x*y);
}