/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"

void main()

{

	float x=0;

	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	if(x>0)
		printf("%f is positive",x);
	else if(x<0)
		printf("%f is negative",x);
	else
		printf("you entered zero");
}
