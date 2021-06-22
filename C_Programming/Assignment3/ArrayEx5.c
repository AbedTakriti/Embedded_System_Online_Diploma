/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"

int main()

{
	int i,number,element;
	printf("Enter the number of elements  :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	int x[number];
	for(i=0;i<number;i++)
		{
			x[i]=(i+1)*11;
			printf("%d ",x[i]);

		}

	printf("\nEnter element to be searched: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&element);
	for(i=0;i<number;i++)
		{
			if(x[i] == element)
			printf("Number found at location %d ", i+1);

		}
	return 0;
}



