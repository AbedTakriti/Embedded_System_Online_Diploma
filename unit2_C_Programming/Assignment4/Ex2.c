/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"


int Factorial(int n)
{
	
	int f=1;
	while(n!=0)
	{
		f= n * Factorial(n-1);
		break;
	}

	return f;
}

void main()

{
	int x;
	printf("Enter a positive integer:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);

	printf("Factorial of %d is : %d",x, Factorial(x));

}


