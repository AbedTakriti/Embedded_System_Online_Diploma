/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"

void main()

{

	char letter;
	int i=0;
for (i=0;i<2;i++){
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&letter);
	if((letter >='a' && letter <= 'z') ||(letter >='A' && letter <= 'Z') )
		printf("%c is an alphabet\n",letter);
	else
		printf("%c is not an alphabet\n", letter);
}
}
