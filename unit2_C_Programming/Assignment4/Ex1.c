#include "stdio.h"


int Check_prime(int num)
{
	int j;
	int flag=0;


	for(j=2;j<=num/2;j++)
	{

		if (num %j ==0 )
		{
			flag =1;
			break;

		}

	}
return flag;
}

void main()

{
	int x,y,i;
	printf("Enter the lower and upper interval respectively:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&y);
	printf("Primer numbers between %d and %d are: ",x,y);
	for(i=x+1;i<y;i++)
	{
		if (Check_prime(i) ==0)
		printf("%d ", i);
	}

}
