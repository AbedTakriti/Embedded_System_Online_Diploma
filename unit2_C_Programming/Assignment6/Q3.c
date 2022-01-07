#include "stdio.h"
#include "string.h"
void main() {
 int i;
char str[50];
 printf("Enter the test string:\n");
 fflush(stdin);
 fflush(stdout);
 scanf("%s",str);
 char*p=(char*)&str[strlen(str)-1];

 printf("Your string reversed:\n");
 for(i=0;i<strlen(str);i++)
 {
	printf("%c",*p);
	p--;

 }
}