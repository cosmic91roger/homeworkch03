#include <stdio.h>
#include <stdlib.h>

int squ(int a,int b);

int rec()
{
	int base, expo, result;
	printf("Enter two integers");
	scanf("%d%d", &base, &expo);
	result = squ(base, expo);
	printf("%d\n", result);
	return 0;
}
int squ(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}
	else
	{
		a=a*squ((a), (b - 1));
		return a;
	}
}