#include "stdio.h"

void main()

{
	int i, n;
	float X1[10], sum = 0.0;
	printf("Please specify the number of elements:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	printf("Now enter the elements:\n");
	fflush(stdin);
	fflush(stdout);
	for (i = 0; i < n; i++) {

		scanf("%f", &X1[i]);

	}
	for (i = 0; i < n; i++) {

		sum = sum + X1[i];

	}
	printf("The average is %.1f", sum / n);
}
