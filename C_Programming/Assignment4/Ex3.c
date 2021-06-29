#include <stdio.h>
void reverse()
{
	char c;

	scanf("%c", &c);

	if( c != '\n')
	{
		reverse();
		printf("%c",c);
	}
}
int main()
{

	printf("Enter a sentence: ");
	fflush(stdin);
		fflush(stdout);
	reverse();

	return 0;
}


