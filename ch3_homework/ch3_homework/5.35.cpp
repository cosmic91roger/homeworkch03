#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned long long int f1(unsigned int a);

int fib()
{
	unsigned int a = 2;
	unsigned long long int result;
	result = f1(a);
	printf("%llu",result);
	return 0;
}

unsigned long long int f1(unsigned int a)
{ 
	unsigned long long int b = 1;
	unsigned long long int d = 0;
	while (ULLONG_MAX - b >= d)
	{
		unsigned long long int c = b;
		b = b+d;
		d = c;
		a++;
	}
	printf("²Ä%d¶µ\n", a);
	return b;
}