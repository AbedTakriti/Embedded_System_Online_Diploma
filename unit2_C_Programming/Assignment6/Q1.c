#include "stdio.h"
void main() {
 int r=29;
printf("Address of r: 0x%X\nValue of r: %d\n",&r,r);
int*ab=(int*)&r;
printf("Address of pointer ab: 0x%X\nValue of r: %d\n",ab,*ab);
r=34;
printf("Address of pointer ab: 0x%X\nValue of r: %d\n",ab,*ab);
*ab=7;
printf("Address of r: 0x%X\nValue of r: %d\n",&r,r);

fflush(stdin);
fflush(stdout);

}

