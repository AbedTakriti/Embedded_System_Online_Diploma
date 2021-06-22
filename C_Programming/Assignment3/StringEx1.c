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
	char sentence[100],c;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(sentence);
	printf("Enter a character to find frequency:  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	while(sentence[i] != '\0')
		{
		if(sentence[i]== c)
			counter++;
		i++;

		}
	printf("Frequency of %c is %d",c,counter);
	return 0;
}



