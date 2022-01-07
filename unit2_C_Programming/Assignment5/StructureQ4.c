#include "stdio.h"
struct sStudent {
	char name[25];
	int roll;
	float marks;
};
static int count=1;
struct sStudent read_data() {
	struct sStudent x;
	printf("For roll number %d:\n",count);
	x.roll=count;
count++;
	printf("Enter name:");
	fflush(stdin);
	fflush(stdout);
	scanf("%s", x.name);
	printf("Enter marks:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &x.marks);
	return x;
}

void print_data(struct sStudent x) {
	printf("For roll number %d:\n", x.roll);

	printf("Name: %s\n", x.name);
	printf("Marks: %.2f\n", x.marks);
}

void main() {
	int i, size = 10;
	struct sStudent student[size];
	for (i = 0; i < size; i++) {
		student[i] = read_data();

	}
	printf("Displaying information\n");

	for (i = 0; i < size; i++) {
		print_data(student[i]);

	}
}

