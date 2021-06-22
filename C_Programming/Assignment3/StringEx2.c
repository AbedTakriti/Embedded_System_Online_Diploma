/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"

int main()

{
	int i=0,counter=0;
	char sentence[100];
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s",&sentence);
	while(sentence[i] != '\0')
		{
		counter++;
		i++;

		}
	printf("length of string is %d",counter);
	return 0;
}



