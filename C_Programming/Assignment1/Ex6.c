#include "stdio.h"

void main()

{

	float x,y;
	printf("Enter value of a:  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of b:  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&y);
	float temp=0;
	temp =x;
	x=y;
	y=temp;
	printf("After swapping, value of a = %f",x);
	printf("\nAfter swapping, value of b = %f",y);

}
