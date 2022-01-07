#include "stdio.h"

void main()

{
	int i, j;
	float X1[2][2], X2[2][2];
	printf("Enter first array elements\n");
	fflush(stdin);
	fflush(stdout);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			scanf("%f", &X1[i][j]);

		}
	}
	printf("Enter second array elements\n");
	fflush(stdin);
	fflush(stdout);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			scanf("%f", &X2[i][j]);

		}
	}
	printf(" the sum of the two arrays: \n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%.2f", X1[i][j] + X2[i][j]);
			printf(" ");
		}
		printf("\n");
	}

}

