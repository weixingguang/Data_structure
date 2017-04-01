#include <stdio.h>

int main()
{
	short s = 0x1234;

	char *pTest = (char*)&s;
	printf("%p %0x %0x \n", &s, pTest[0], pTest[1]);
	
	return 0;
}
