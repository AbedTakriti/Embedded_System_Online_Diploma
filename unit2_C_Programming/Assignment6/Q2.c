#include "stdio.h"
void main() {
 int i;
char alphabet = 'A';
 char*p=(char*)&alphabet;
 for(i=0;i<26;i++)
 {
	printf("%c ",alphabet);
	*p=*p+1;

 }
}