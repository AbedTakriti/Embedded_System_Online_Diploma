/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"

int main()

{
int x=0;
float data[x],sum=0;//To set the array size as variable is the only way I found to make it working
int i;
printf("Enter the numbers of data\n");
fflush(stdin);
fflush(stdout);
scanf("%d",&x);
for(i=0;i<x;i++)
	{
		printf("%d. Enter the number:\n",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&data[i]);
		sum=sum+data[i];
	}
printf("Avergae = %f",sum/x);
return 0;
}



