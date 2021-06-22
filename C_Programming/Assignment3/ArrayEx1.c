/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"

int main()

{
	float x[2][2];
	float y[2][2];
	int i,j;
	printf("Enter the elements of the 1st Matrix\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{

			printf("Enter the a%d%d element:",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&x[i][j]);
		}
	}
	printf("\nEnter the elements of the 2nd Matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the a%d%d element:",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&y[i][j]);
		}
	}
	printf("\nThe Sum of Matrix:\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{

			printf("%.2f ", x[i][j]+y[i][j]);

		}
		printf("\n");
	}
	return 0;
}



