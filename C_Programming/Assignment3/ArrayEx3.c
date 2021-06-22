/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"

int main()

{
	int i,j,c,r;
	printf("Enter the rows and columns respectively  :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&r);
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&c);
	int x[r][c];
	int y[c][r];
	printf("Enter the elements of matrix:\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element a%d%d:\n",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&x[i][j]);
		}
	}

	printf("Entered Matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	printf("Transposed Matrix:\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				y[i][j]=x[j][i];
				printf("%d\t",y[i][j]);
			}
			printf("\n");
		}
	return 0;
}



