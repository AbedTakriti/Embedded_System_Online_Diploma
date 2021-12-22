#include "stdio.h"
struct sDistance {
	int feet;
	float inch;
};
struct sDistance read_data(char name[]) {
	struct sDistance x;
	printf("Enter information for %s\n",name);
	printf("Enter feet:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x.feet);
	printf("Enter inch:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &x.inch);
	return x;

}
	 void  add_print(struct sDistance x, struct sDistance y)
	{
		struct sDistance z;
	z.feet =x.feet + y.feet;
	z.inch = x.inch + y.inch;
	if((x.inch+ y.inch) >= 12)
	{
		z.feet++;
		z.inch=z.inch-12;
	}
	printf("Sum of distances= %d' - %.2f\" \n",z.feet, z.inch);


	}


/*void print_data(struct sDistance x) {
}*/

void main() {
	struct sDistance distance1, distance2;
	distance1 = read_data("distance1");
	distance2 = read_data("distance2");
	add_print(distance1, distance2);
}

