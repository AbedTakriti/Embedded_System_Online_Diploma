/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"
#include "string.h"

int power(int a,int b)
{
	if(b!=0)
		return a=a*power(a,b-1);
	else
		return 1;
}

void main()

{
	int x,p;
	printf("Enter a base number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter a power : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p);
	printf("%d ^ %d = %d",x, p, power(x,p));

}


