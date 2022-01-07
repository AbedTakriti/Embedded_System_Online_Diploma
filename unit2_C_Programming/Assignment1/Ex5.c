#include "stdio.h"

void main()

{

	char x;
	printf("Enter a character:  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII code of %c = %d",x,x);

}
