#include "stdio.h"


int power(int x,int y)
{

if( y!=1)

return x * power(x,y-1);
}
void main()

{
int a,b;
	printf("Enter  base number :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter  power number :");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&b);
		if(b==0)
	printf("%d ^ %d = %d\n",a,b,1);
		else
			printf("%d ^ %d = %d\n",a,b,power(a,b));

	}

