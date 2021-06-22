/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"

int main()

{
	int i,number,new_element,location;
	printf("Enter the number of elements  :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	int x[number];
	for(i=0;i<number;i++)
		{
			x[i]=i+1;
			printf("%d ",x[i]);

		}

	printf("\nEnter element to be inserted: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&new_element);
	printf("Enter the location: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&location);
	for(i=0;i<number;i++)
		{
			if(i == location-1)
			printf("%d ", new_element);
			printf("%d ",x[i]);

		}
	return 0;
}



