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
	for(i=0;i<2;i++){
	printf("Enter an alphabet: ");

	fflush(stdin);
	fflush(stdout);
	scanf("%c",&letter);
	switch (letter)
	{
	case'A':
	case'E':
	case'I':
	case'O':
	case'U':
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
	{
		printf("%c is a vowel\n",letter);
		break;
	}
	default:
	{
		printf("%c is a consonant\n", letter);
		break;


	}

}}
}
