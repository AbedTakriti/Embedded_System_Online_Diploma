#include "stdio.h"
#define Area 3.14*r*r
void main() {
int r;
printf("Enter the radius:\n");
fflush(stdin);
fflush(stdout);
scanf("%d",&r);
printf("Area: %.2f",Area);
}

