#include <stdio.h>
#include "main.h"

/*
 * write your line of code here...
 */

int main(void)
{
	int n;
	int a['%'];
	int *p;

	a['/'] = 1024;
	p = &n;
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
