/*
 * Ex1.c
 *
 *  Created on: Jun 15, 2021
 *      Author: Abdulrahman
 */
#include "stdio.h"
#include "string.h"

int main()

{
	int i=0;
	char word[100],temp;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s",&word);
	int len=strlen(word);
	for(i=0;i<len/2;i++)
		{
		temp=word[i];
		word[i]=word[len-i-1];
		word[len-i-1] = temp;
		}
	printf("Reverse String: %s ",&word);
	return 0;
}



