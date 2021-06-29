/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"


void PrimeNumbers(int a, int b)
{
	int i=a;


	for(i=a;i<=b;i++)
	{

		if ( i==2 || i==3||i==5||i==7  )
			printf(" %d",i);

		else
		{
			if (  i%2 && i%3 && i%5 && i%7)
				printf(" %d",i);
		}
	}

}

void main()

{
	int x,y;
	printf("Enter the lower and upper interval respectively:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&y);
	printf("Primer numbers between %d and %d are: ",x,y);
	PrimeNumbers(x,y);

}


