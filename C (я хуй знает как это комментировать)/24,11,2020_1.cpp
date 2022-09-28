#include <stdio.h>

int main()
{
	char c='A', z;
	char *p;
	p=&c;
	z=*p;	
	
	printf("c=%c, \tp=%p, z=%c\n", c, p, z);
	printf("c=%c, \tadres c to:%p, \ta to * (&c): %c\n)", c, &c, *(&c));
	return 0;
}
