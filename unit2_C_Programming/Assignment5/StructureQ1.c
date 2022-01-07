#include "stdio.h"
struct sStudent {
	char name[25];
	int roll;
	float marks;
};
struct sStudent read_data() {
	struct sStudent x;
	printf("Enter name:");
	fflush(stdin);
	fflush(stdout);
	scanf("%s", x.name);
	printf("Enter roll number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x.roll);
	printf("Enter marks:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &x.marks);
	return x;
}

void print_data(struct sStudent x) {
	printf("Displaying information\n");
	printf("Name: %s\n", x.name);
	printf("Roll: %d\n", x.roll);
	printf("Marks: %.2f\n", x.marks);
}

void main() {
	struct sStudent student1;
	student1 = read_data();
	print_data(student1);
}

