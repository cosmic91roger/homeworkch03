#include <stdio.h>
#include <stdlib.h>

void lcm(int a,int b);
int gcd(int a, int b);
int mul()
{
	int a, b;
	printf("Enter two integer");
	scanf("%d%d", &a, &b);
	lcm(a, b);
	return 0;
}

void lcm(int a, int b)
{
	printf("%d\n", (a * b) / gcd(a, b));
}
int gcd(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}