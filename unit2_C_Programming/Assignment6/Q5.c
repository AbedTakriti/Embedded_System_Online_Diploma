#include "stdio.h"
#include "string.h"

struct employee{
	char name[50];
	int id;

};


void main() {
	struct employee Emp1={"Alex", 1002};
	struct employee *p[10];
	p[0]=&Emp1;
	printf("Employee Name: %s\nEmployee ID: %d",p[0]->name,p[0]->id);

}