#include "stdio.h"
#include "string.h"
void main() {
	int i, size;
	int arr[15];
	printf("Input the number of elements to store in the array (max 15):\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &size);
	int *p = (int*) &arr[size - 1];
	printf("Input %d number elements in the array:\n", size);

	for (i = 0; i < size; i++) {
		printf("element -%d: ", i + 1);
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	printf("The elements of array in reverse order are:\n");
	for (i = 0; i < size; i++) {
		printf("element -%d: %d\n", size - i, *p);
		p--;
	}

}