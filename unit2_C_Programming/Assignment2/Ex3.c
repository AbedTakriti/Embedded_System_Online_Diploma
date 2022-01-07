/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"

void main()

{

	float x=0,y=0,z=0;

	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	if(x>y)
	{
		if(x>z)
			printf("Largest number: %f", x);

		else
			printf("Largest number: %f", z);
	}
	else
	{
		if(y>z)
			printf("Largest number: %f", y);
		else
			printf("Largest number: %f", z);
	}

}
