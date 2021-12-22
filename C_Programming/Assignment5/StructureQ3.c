#include "stdio.h"
struct sComplex{
	float real;
	float img;
};
static int count=1;
struct sComplex read_data() {
	struct sComplex x;
	printf("For complex number %d\n", count);
	count++;
	printf("Enter real and imaginary respectively:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &x.real);
	scanf("%f", &x.img);
	return x;
}
void add_print(struct sComplex x, struct sComplex y) {
	struct sComplex z;
	z.real = x.real + y.real;
	z.img = x.img + y.img;

	printf("Sum of numbers= %.1f + %.1fi \n", z.real, z.img);

}

/*void print_data(struct sDistance x) {
 }*/

void main() {
	struct sComplex complex1, complex2;
	complex1 = read_data();
	complex2 = read_data();
	add_print(complex1, complex2);
}

