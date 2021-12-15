#include "stdio.h"

void main()

{
	int i, num, position, place, size;
	int X1[100];

	printf("Please specify the size of array :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &size);
	printf("Now enter the elements:\n");
	fflush(stdin);
	fflush(stdout);
	for (i = 0; i < size; i++) {
		scanf("%d", &X1[i]);
	}
	printf("Enter the number desired:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num);
	printf(" specify the position from 1 --> %d :\n", size);
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &position);
	place = position - 1;
	for (i = size - 1; i >= 0; i--) {
		X1[i + 1] = X1[i];
		if (i == place) {
			X1[i] = num;
			break;
		}
	}
	printf("array after inserting:\n");
	for (i = 0; i < size + 1; i++) {
		printf("%d ", X1[i]);
	}

}
