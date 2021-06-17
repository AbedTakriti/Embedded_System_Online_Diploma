#include "stdio.h"

void main()

{

	int x=0,y=0;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	printf("Sum: %d",x+y);
}
